using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Newtonsoft.Json;
using SqlSaturday.AzureMaps.Api.Services;
using Microsoft.Azure.Management.Maps;

namespace SqlSaturday.AzureMaps.Api.Controllers
{
    [Route("api/Maps")]
    [ApiController]
    public class MapsController : ControllerBase
    {
       
        [HttpPost("Upload")]
        public Coordinates UploadFile([FromBody] ObjectModel data)
        {
            //var Landmark = GetLandmark(data.file);
            return new Coordinates() { Longitud = "10", Latitude = "15" };
        }

        [HttpPost("UploadBinary")]
        public Result UploadFile()
        {
            var file = Request.Body;
            MemoryStream stream = new MemoryStream();
            file.CopyTo(stream);
            byte[] bytes = stream.ToArray();
            var landmark = GetLandmark(bytes);
            stream.Dispose();
            return GetCoordinates(landmark);
        }

        public string GetLandmark(byte[] bytes)
        {
            var url = "https://westus.api.cognitive.microsoft.com/vision/v2.0/analyze?details=Landmarks";
            string visionApiKey = "d8b993a32a4d46b5b4ddf17ea6144aa8";

            HttpClient client = new HttpClient();

            // Request headers.
            client.DefaultRequestHeaders.Add("Ocp-Apim-Subscription-Key", visionApiKey);


            HttpResponseMessage response;

            string contentString = string.Empty;
            using (ByteArrayContent content = new ByteArrayContent(bytes))
            {
                // This example uses content type "application/octet-stream".
                // The other content types you can use are "application/json" and "multipart/form-data".
                content.Headers.ContentType = new MediaTypeHeaderValue("application/octet-stream");

                // Execute the REST API call.
                response = client.PostAsync(url, content).Result;

                // Get the JSON response.
                contentString = response.Content.ReadAsStringAsync().Result;

                if (response.StatusCode == HttpStatusCode.OK)
                {
                    var info = JsonConvert.DeserializeObject<RootObject>(contentString);

                    var current = info.categories.Where(x=>x.detail !=null && x.detail.landmarks != null).FirstOrDefault()?.detail.landmarks.FirstOrDefault().name;
                    return current;
                }

                return null;
            }

            
        }

        public Result GetCoordinates(string search)
        {
            var suscriptionKey = "wFEIEg9VEJsEeLHV-ieTFVJ2_nbiermiUCvx7gR-jws";
            HttpClient client = new HttpClient();
            var url = $"https://atlas.microsoft.com/search/fuzzy/json?api-version=1.0&subscription-key={suscriptionKey}&query={search}";
            var response =  client.GetAsync(url).Result;
            var contentString  = response.Content.ReadAsStringAsync().Result;

            if (response.StatusCode == HttpStatusCode.OK)
            {
                var info = JsonConvert.DeserializeObject<FuzzySearchResult>(contentString);
                return info.results.FirstOrDefault();
            }

            return null;


        }
    }




    public class ObjectModel
    {
        public string file { get; set; }
    }

    public class Coordinates
    {
        public string Longitud { get; set; }
        public string Latitude { get; set; }
    }
}

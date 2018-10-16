using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Newtonsoft.Json;
using SqlSaturday.AzureMaps.Api.Services;

namespace SqlSaturday.AzureMaps.Api.Controllers
{
    [Route("api/Maps")]
    [ApiController]
    public class MapsController : ControllerBase
    {
       
        [HttpPost("Upload")]
        public Result UploadFile([FromBody] ObjectModel data)
        {
            var Landmark = GetLandmark(data.file);
            return new Result() { Longitud = "10", Latitude = "15" };
        }

        public string GetLandmark(string file)
        {
            var url = "https://westus.api.cognitive.microsoft.com/vision/v2.0/analyze?details=Landmarks";
            string visionApiKey = "d8b993a32a4d46b5b4ddf17ea6144aa8";

            HttpClient client = new HttpClient();

            // Request headers.
            client.DefaultRequestHeaders.Add("Ocp-Apim-Subscription-Key", visionApiKey);


            HttpResponseMessage response;

            string contentString = string.Empty;
            var bytes = Shared.GetImageAsByteArray(file);
            using (ByteArrayContent content = new ByteArrayContent(bytes))
            {
                // This example uses content type "application/octet-stream".
                // The other content types you can use are "application/json" and "multipart/form-data".
                content.Headers.ContentType = new MediaTypeHeaderValue("application/octet-stream");

                // Execute the REST API call.
                response = client.PostAsync(url, content).Result;

                // Get the JSON response.
                contentString = response.Content.ReadAsStringAsync().Result;

                var info = JsonConvert.DeserializeObject<RootObject>(contentString);
                return info.categories.FirstOrDefault().detail.landmarks.FirstOrDefault().ToString();

            }

            
        }
    }

    public class ObjectModel
    {
        public string file { get; set; }
    }

    public class Result
    {
        public string Longitud { get; set; }
        public string Latitude { get; set; }
    }
}

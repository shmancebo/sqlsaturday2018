using Microsoft.Analytics.Interfaces;
using Microsoft.Analytics.Interfaces.Streaming;
using Microsoft.Analytics.Types.Sql;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;

namespace SqlSaturday.USQL.Services
{
    public class LandMarkService
    {
        public async Task<string> Process()
        {
            HttpClient client = new HttpClient();
            HttpResponseMessage response = await client.GetAsync($"https://dotnetapisearch.azurewebsites.net/api/search?index=csindex&query=*");
            var result =  await response.Content.ReadAsStringAsync();
            return result;
        }
    }
}
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;

namespace SqlSaturday.AzureMaps.Api.Controllers
{
    [Route("api/Maps")]
    [ApiController]
    public class MapsController : ControllerBase
    {
       
        [HttpPost("Upload")]
        public void UploadFile([FromBody] byte[] data)
        {
           
            
        }
    }
}

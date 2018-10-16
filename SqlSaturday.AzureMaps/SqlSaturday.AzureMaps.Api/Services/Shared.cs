using Microsoft.AspNetCore.Hosting;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;

namespace SqlSaturday.AzureMaps.Api.Services
{
    public static class Shared
    {
        public static byte[] GetImageAsByteArray(string image)
        {
            string webRootPath = Path.Combine(Directory.GetCurrentDirectory(), "wwwroot", "Imagenes",image);
            FileStream fileStream = new FileStream(webRootPath, FileMode.Open, FileAccess.Read);
            BinaryReader binaryReader = new BinaryReader(fileStream);
            return binaryReader.ReadBytes((int)fileStream.Length);
        }
    }
}

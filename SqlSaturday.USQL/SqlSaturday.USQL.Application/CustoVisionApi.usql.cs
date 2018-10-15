using Microsoft.Analytics.Interfaces;
using Microsoft.Analytics.Types.Sql;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

namespace VisionExtension
{
    public class ApiVisionFunction
    {

        public static Dictionary<string,string> ProcessImage(string file)
        {
            List<Result> result = new List<Result>();
            result.Add(new Result() { Id = "10", File = "file" });
            return result;
        }
    }


}

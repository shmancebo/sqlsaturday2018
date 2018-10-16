using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace SqlSaturday.AzureMaps.Api.Services
{
    public class Detail
    {
        public List<object> landmarks { get; set; }
    }

    public class Category
    {
        public string name { get; set; }
        public double score { get; set; }
        public Detail detail { get; set; }
    }

    public class Metadata
    {
        public int height { get; set; }
        public int width { get; set; }
        public string format { get; set; }
    }

    public class RootObject
    {
        public List<Category> categories { get; set; }
        public string requestId { get; set; }
        public Metadata metadata { get; set; }
    }
}

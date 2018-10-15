using Microsoft.Analytics.Interfaces;
using Microsoft.Analytics.Types.Sql;
using SqlSaturday.USQL.Services;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

namespace USQL_UDO
{
    public class ActorDetails : IProcessor
    {

        private static IDictionary<string, string> Sentence = new Dictionary<string, string>
         {
             {
                 "Leonardo DiCaprio", "Rose te dejo caer de la tabla...."
             },
             {
                 "Tom Hanks", "El mundo es una caja de bombones"
             },
             {
                 "Russell Crowe", "Yo soy Máximo decimo Meridio"
             },
             {
                 "The Godfather", "La familia es la familia"
             }
         };
        public override IRow Process(IRow input, IUpdatableRow output)
        {
            string year = input.Get<string>("year");
            string category = input.Get<string>("category");
            string winner = input.Get<string>("winner");
            string entity = input.Get<string>("entity");
            string sentence = string.Empty;

            var current = string.Empty;
            if (Sentence.TryGetValue(entity, out current))
            {
                sentence = current;
            }

            output.Set<string>(0, year);
            output.Set<string>(1, category);
            output.Set<string>(2, winner);
            output.Set<string>(3, entity);
            output.Set<string>(4, sentence);
            return output.AsReadOnly();
        }
    }
}
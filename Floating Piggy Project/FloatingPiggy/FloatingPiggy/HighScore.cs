using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Xml.Serialization;
using System.Text;
using System.Threading.Tasks;

namespace FloatingPiggy
{
    internal class HighScore
    {
        public List<string> Scores = new List<string>();
        string fileMain = "highscores.xml";
        public string fileCopy = "scores.xml";

        public HighScore() { }

        public int Maximum()
        {
            ReadFile();
            int temp = 0;
            foreach(string score in Scores) 
            {
                if(temp < Int32.Parse(score))
                {
                    temp =  Int32.Parse(score);
                }
            }
            return temp;
        }

        public void WriteToFile(List<string> s)
        {
            using (var stream = new FileStream(fileMain, FileMode.Create))
            {
                var serializer = new XmlSerializer(typeof(List<string>));
                 if (File.Exists(fileCopy))
                 {
                     ReadFile();
                 }
                serializer.Serialize(stream, Scores);
            }

            File.Copy(fileMain, fileCopy, true);

        }

        private void ReadFile()
        {
            using (var stream = new FileStream(fileCopy, FileMode.Open))
            {
                var serializer = new XmlSerializer(typeof(List<string>));
                var elements = (List<string>)serializer.Deserialize(stream);
                Scores.AddRange(elements);
            }
        }
    }
}

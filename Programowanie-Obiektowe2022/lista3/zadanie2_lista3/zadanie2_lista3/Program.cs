using System;

namespace zadanie2_lista3
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            DictionaryList<int, string> lista = new DictionaryList<int, string>();
            lista.add(1,"ola");
            lista.add(3,"ala");
            lista.add(4,"ula");
            Console.WriteLine("{0}",lista.find(4));
            lista.delete(4);
            Console.WriteLine("{0}",lista.find(4));
            lista.delete(4);
        }
    }
}
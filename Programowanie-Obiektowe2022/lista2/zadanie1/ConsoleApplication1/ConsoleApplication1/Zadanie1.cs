using System;

namespace ConsoleApplication1
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            RandomWordStream nowy = new RandomWordStream();
            Console.WriteLine("{0}",nowy.next());
            Console.WriteLine("{0}",nowy.next());
            Console.WriteLine("{0}",nowy.next());
            Console.WriteLine("{0}",nowy.next());
        }
    }
}
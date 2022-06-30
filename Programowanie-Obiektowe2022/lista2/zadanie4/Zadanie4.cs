using System;

namespace ConsoleApplication2
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            LazyIntList list1 = new LazyIntList();
            Console.WriteLine("{0}", list1.element(20));
            Console.WriteLine("{0}", list1.size());
            Console.WriteLine("{0}", list1.element(15));
            Console.WriteLine("{0}", list1.size());
            Console.WriteLine("{0}", list1.element(22));
            Console.WriteLine("{0}", list1.size());
            Console.WriteLine("{0}", list1.element(21));
            
            LazyPrimeList list2 = new LazyPrimeList();
            Console.WriteLine("{0}", list2.element(3));
            Console.WriteLine("{0}", list2.size());
            Console.WriteLine("{0}", list2.element(2));
            Console.WriteLine("{0}", list2.size());
            Console.WriteLine("{0}", list2.element(4));
            Console.WriteLine("{0}", list2.size());
            Console.WriteLine("{0}", list2.element(3));
        }
    }
}
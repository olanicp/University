using System;

namespace zad1_lista3
{
  internal class Program
  {
      public static void Main(string[] args)
      {
          Lista<int> check_list = new Lista<int>();
          Console.WriteLine("{0}",check_list.is_empty());
          check_list.push_front(5);
          Console.WriteLine("{0}",check_list.is_empty());
          check_list.push_back(7);
          Console.WriteLine("{0}",check_list.pop_back());
          Console.WriteLine("{0}",check_list.pop_front());
          Console.WriteLine("{0}",check_list.is_empty());
          check_list.push_back(7);
          Console.WriteLine("{0}",check_list.pop_front());
          Console.WriteLine("{0}",check_list.pop_front());
      }
      
    }
}
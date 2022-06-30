using System;
using System.Collections;
using System.Collections.Generic;

namespace ConsoleApplication1
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            PrimeCollection pc = new PrimeCollection();
            foreach (var p in pc)
            {
                Console.WriteLine(p);
            }
        }
    }

    class PrimeCollection : IEnumerable<int>
    {
        public IEnumerator<int> GetEnumerator()
        {
            return new PrimeCollectionEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return new PrimeCollectionEnumerator();
        }
    }

    class PrimeStream
    {
        public int n;
        
        public PrimeStream()
        {
            this.n = 2;
        }
        public bool primeNumber()
        {
            int i = 2;
            while (i*i <= n)
            {
                if (n % i == 0) return false;
                i++;
            }

            return true;
        }
                    
        public void next()
        {
            while (!primeNumber()) n++;
            n++;
        }
    }
    
    class PrimeCollectionEnumerator : IEnumerator<int>
    {
        public int n = 1;
        
        public bool primeNumber()
        {
            int i = 2;
            while (i*i <= n)
            {
                if (n % i == 0) return false;
                i++;
            }

            return true;
        }
        public int Current
        {
            get
            {
                while (!primeNumber()) n++;
                return n;
            }
        }
        
        object IEnumerator.Current
        {
            get
            {
                return Current;
            }
        }
        
        public bool MoveNext()
        {
            n++;
            if (Current > Int32.MaxValue) return false;
            return true;
        }

        public void Reset()
        {
            //throw new System.NotImplementedException();
        }

        public void Dispose()
        {
            //throw new System.NotImplementedException();
        }
    }
}
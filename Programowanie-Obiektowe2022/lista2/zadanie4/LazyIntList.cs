using System.Collections.Generic;

namespace ConsoleApplication2
{
    class LazyIntList
    {
        public List<int> lista;
        public int max;
        public IntStream nextInt = new IntStream();
        
        public LazyIntList()
        {
            lista = new List<int>();
            max = 0;
        }

        public virtual int element(int i)
        {
            if (max < i)
            {
                for (int j = 0; j < i - max; j++)
                {
                    lista.Add(nextInt.next());
                }

                max = i;
            }
           
            return lista[i - 1];

        }

        public int size()
        {
            return this.max;
        }
        
        
    }
}
namespace ConsoleApplication2
{
    class LazyPrimeList : LazyIntList
    {
        private PrimeStream nextPrime;

        public LazyPrimeList()
        {
            nextPrime = new PrimeStream();
        }

        public override int element(int i)
        {
            if (max < i)
            {
                for (int j = 0; j < i - max; j++)
                {
                    lista.Add(nextPrime.next());
                }

                max = i;
            }
            return lista[i - 1];
        }
        
    }
}
namespace ConsoleApplication2
{
    class PrimeStream:IntStream
    {
        private int m;

        public PrimeStream()
        {
            this.m = 2;
        }
        private bool primeNumber()
        {
            int i = 2;
            while (i*i <= m)
            {
                if (m % i == 0) return false;
                i++;
            }

            return true;
        }
                    
        public override int next()
        {
            if(eos()) reset();
            while (!primeNumber()) m++;
            return m++;
        }
    }
}
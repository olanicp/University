namespace ConsoleApplication1
{
    class RandomWordStream
    {
        private PrimeStream pr;
        private RandomStream rn;

        public RandomWordStream()
        {
            pr = new PrimeStream();
            rn = new RandomStream();
        }

        public string next()
        {
            string word = "";
            int prime = pr.next();
            for (int i = 0; i < prime; i++)
            {
                word += (char) (rn.next() % 255);
            }

            return word;
        }
    }
}
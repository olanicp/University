using System;

namespace ConsoleApplication1
{
    class RandomStream:IntStream
    {
        private Random rnd;
        
        public RandomStream()
        {
            rnd = new Random();
        }
        public override int next()
        {
            return rnd.Next();
        }
    }
}
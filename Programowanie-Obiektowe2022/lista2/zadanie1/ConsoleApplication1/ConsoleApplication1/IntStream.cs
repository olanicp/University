using System;

namespace ConsoleApplication1
{
    class IntStream
    {
        private int n;
        public IntStream()
        {
            this.n = 0;
        }
        public virtual int next()
        {
            if(eos()) reset();
            return n++;
        }

        public bool eos()
        {
            if (n <= Int32.MaxValue) return false;
            else return true;
        }

        public void reset()
        {
            if (n == Int32.MaxValue) n = 0;
        }
    }
}
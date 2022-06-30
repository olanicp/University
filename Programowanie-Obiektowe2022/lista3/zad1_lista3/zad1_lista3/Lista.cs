namespace zad1_lista3
{
    class Lista<T>
    {
        Node<T> head;
        Node<T> tail;

        public void push_front(T elem)
        {
            Node<T> node = new Node<T>(elem);
            node.next = head;
            if (is_empty())
            {
                tail = node;
            }
            else
            {
                head.prev = node;
            }
            head = node;
        }

        public void push_back(T elem)
        {
            Node<T> node = new Node<T>(elem);
            if (tail == null)
            {
                head = node;
            }
            else
            {
                node.prev = tail;
                tail.next = node;
            }
            tail = node;
        }

        public T pop_front()
        {
            if (head == null)
            {
                tail = null;
                return default(T);
                //throw new Exception("Lista jest pusta");
            }
            else
            { 
                T temp = head.data;
                head = head.next;
                return temp; 
            }
             
        }

        public T pop_back()
        {
            if (tail == null)
            {
                head = null;
                return default(T);
                //throw new Exception("Lista jest pusta");
            }
            else
            {
                T temp = tail.data;
                tail = tail.prev;
                return temp;
            }
            
        }

        public bool is_empty()
        {
            if (head == null)
            {
                return true;
            }

            return false;
        }

    }
}
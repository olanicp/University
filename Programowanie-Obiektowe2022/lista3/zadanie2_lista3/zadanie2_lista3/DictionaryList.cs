using System;

namespace zadanie2_lista3
{
    class DictionaryList<K,V>
    {
        MyDictionary<K, V> head;
        MyDictionary<K, V> tail;

        public void add(K key, V value)
        {
            MyDictionary<K, V> node = new MyDictionary<K, V>(key, value);
            node.next = head;
            if (head == null)
            {
                tail = node;
            }
            else
            {
                head.prev = node;
            }

            head = node;
        }

        public V find(K key)
        {
            MyDictionary<K, V> temp = head;
            while (temp != null)
            {
                if (temp.key.Equals(key))
                {
                    return temp.value;
                }

                temp = temp.next;
                
            }

            throw new Exception("taki klucz nie istnieje");
        }

        public void delete(K key)
        {
            bool flaga = false;
            MyDictionary<K, V> temp = head;
            while (temp != null)
            {
                if (temp.key.Equals(key))
                {
                    if (temp.next == null) tail = temp.prev;
                    else temp.next.prev = temp.prev;
                    if (temp.prev == null) head = temp.next;
                    else temp.prev.next = temp.next;
                    flaga = true;
                }

                temp = temp.next;
            }

            if (flaga == false)
            {
                throw new Exception("taki klucz nie istnieje");
            }
            
        }
    }
}
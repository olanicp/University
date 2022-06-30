namespace zadanie2_lista3
{
    class MyDictionary<K, V>
    {
        public K key;
        public V value;
        public MyDictionary<K, V> next;
        public MyDictionary<K, V> prev;

        public MyDictionary(K otherKey, V otherValue)
        {
            key = otherKey;
            value = otherValue;
            next = null;
            prev = null;
        }

    }
}
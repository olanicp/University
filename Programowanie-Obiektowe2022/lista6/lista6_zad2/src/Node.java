public class Node<T>{
    public T data;
    public Node<T> next;
    public Node<T> prev;

    public Node(T x)
    {
        data = x;
        next = null;
        prev = null;
    }
}

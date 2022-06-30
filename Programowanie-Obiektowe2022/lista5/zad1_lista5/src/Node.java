public class Node<T extends Comparable<T>>{
    T data;
    Node<T> next;
    Node(T data){
        this.data = data;
        next = null;
    }
}
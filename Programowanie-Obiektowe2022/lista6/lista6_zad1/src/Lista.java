//zadanie 1 z listy 3
public class Lista<T> implements java.io.Serializable{
    Node<T> head;
    Node<T> tail;

    public void push_front(T elem)
    {
        Node<T> node = new Node<T>(elem);
        node.next = head;
        if (is_empty()){
            tail = node;
        }else{
            head.prev = node;
        }
        head = node;
    }

    public void push_back(T elem)
    {
        Node<T> node = new Node<T>(elem);
        if (tail == null){
            head = node;
        }else{
            node.prev = tail;
            tail.next = node;
        }
        tail = node;
    }

    public T pop_front() throws Exception {
        if (head == null){
            tail = null;
            throw new Exception("Lista jest pusta");
        }else {
            T temp = head.data;
            head = head.next;
            return temp;
        }
    }

    public T pop_back() throws Exception {
        if (tail == null){
            head = null;
            throw new Exception("Lista jest pusta");
        }else{
            T temp = tail.data;
            tail = tail.prev;
            return temp;
        }
    }

    public boolean is_empty() {
        if (head == null) {
            return true;
        }
        return false;
    }

    @Override
    public String toString(){
        Node<T> temp = head;
        String result = "";
        while(temp != null){
            result = result + temp.data + " ";
            temp = temp.next;
        }
        return result;
    }
}


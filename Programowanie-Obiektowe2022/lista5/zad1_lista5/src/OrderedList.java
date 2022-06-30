
public class OrderedList<T extends Comparable<T>> {
    public Node<T> head;

    public void add_element(T elem){
        Node<T> node = new Node<>(elem);
        if(head == null){
            head = node;
        }else{
            node.next = head;
            head = node;
            Node<T> temp = head;

            while(temp.next != null) {
                if (temp.data.compareTo(temp.next.data) == -1) {
                    T tmp = temp.next.data;
                    temp.next.data = temp.data;
                    temp.data = tmp;
                }
                temp = temp.next;

            }
        }
    }

    public T get_first(){
        return head.data;
    }

    @Override
    public String toString(){
        Node<T> temp = head;
        String result = "";
        while(temp != null){
            result = result + temp.data;
            temp = temp.next;
        }
        return result;
    }
}

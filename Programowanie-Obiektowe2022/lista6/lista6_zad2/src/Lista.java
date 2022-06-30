import java.lang.reflect.Array;
import java.util.Collection;
import java.util.Iterator;
import java.util.ListResourceBundle;
import java.util.NoSuchElementException;


//zadanie 1 z listy 3
public class Lista<T> implements Collection<T>{
    Node<T> head;
    Node<T> tail;
    int length = 0;

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

    @Override
    public int size() {
        return length;
    }

    @Override
    public boolean isEmpty() {
        if (head == null) {
            return true;
        }
        return false;
    }

    @Override
    public boolean contains(Object o) {
        Node<T> temp = head;
        while(temp != null){
            if(temp.data.equals(o))
                return true;
            else temp = temp.next;
        }
        return false;
    }

    @Override
    public Iterator<T> iterator() {
        return new ClassIterator();
    }

    class ClassIterator implements Iterator<T>{

       Node<T> current = null;

        @Override
        public boolean hasNext() {
            if(current == null && head != null) {
                return true;
            }
            else if(current != null){
                return current.next != null;
            }

            return false;
        }

        @Override
        public T next() {
            if(current == null && head != null){
                current = head;
                return head.data;
            }
            else if(current != null){
                T data = current.next.data;
                current = current.next;
                return data;
            }
            throw new NoSuchElementException();
        }
    }


    @Override
    public Object[] toArray() {
        Object tab[] = new Object[size()];
        return toArray(tab);
    }

    @Override
    public <T> T[] toArray(T[] a) {
        int size = size();
        if(a.length < size){
            a = (T[]) Array.newInstance(a.getClass().getComponentType(), size);
        } else if(a.length > size){
            a[size] = null;
        }
        Node<T> temp = (Node<T>) head;
        int i = 0;
        while(temp != null){
            a[i] = temp.data;
            temp = temp.next;
            i++;
        }
        return a;
    }

    @Override
    public boolean add(T e) {
        Node<T> node = new Node<T>(e);
        node.next = head;
        if (isEmpty()){
            tail = node;
        }else{
            head.prev = node;
        }
        head = node;
        length++;
        return true;
    }

    @Override
    public boolean remove(Object o) {
        Node<T> temp = head;
        while (temp != null)
        {
            if (temp.data.equals(o))
            {
                if (temp.next == null) tail = temp.prev;
                else temp.next.prev = temp.prev;
                if (temp.prev == null) head = temp.next;
                else temp.prev.next = temp.next;
                return true;
            }

            temp = temp.next;
        }
        return false;
    }

    @Override
    public boolean containsAll(Collection<?> c) {
        for(Object obj : c){
            if(!this.contains(obj)) {
                return false;
            }
        }
        return true;
    }

    @Override
    public boolean addAll(Collection<? extends T> c) {
        for(T obj : c) {
            this.add(obj);
        }
        return true;
    }

    @Override
    public boolean removeAll(Collection<?> c) {
        for(Object obj : c){
            if(this.contains(obj)){
                this.remove(obj);
            }
        }
    return true;
    }

    @Override
    public boolean retainAll(Collection<?> c) {
        for(Object obj : this){
            if(!c.contains(obj)){
                this.remove(obj);
            }
        }
        return true;
    }

    @Override
    public void clear() {
        head = null;
        tail = null;
    }
}


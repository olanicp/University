import java.io.*;

public class lista_6_zad1 {
    public static void main(String[] args){
        System.out.println("SERIALIZATION: ");
        Lista<Integer> check_list = new Lista<Integer>();
        check_list.push_front(5);
        System.out.println(check_list.is_empty());
        check_list.push_back(7);
        System.out.println(check_list.toString());

        /*
        try {
            System.out.println(check_list.pop_back());
        }catch (Exception ex) {
            ex.printStackTrace();
        }
        try {
            System.out.println(check_list.pop_front());
        }catch (Exception ex){
            ex.printStackTrace();
        }
        System.out.println(check_list.is_empty());
        check_list.push_back(7);

        try {
            System.out.println(check_list.pop_front());
        }catch (Exception ex){
            ex.printStackTrace();
        }

        try {
            System.out.println(check_list.pop_front());
        }catch (Exception ex){
            ex.printStackTrace();
        }
        */
        try{
            FileOutputStream file_out = new FileOutputStream("list");
            ObjectOutputStream out = new ObjectOutputStream(file_out);
            out.writeObject(check_list);
            out.close();
            file_out.close();
        } catch (IOException ex){
            ex.printStackTrace();
        }

        System.out.println("DESERIALIZATION: ");
        Lista<Integer> list = new Lista<>();

        try{
            FileInputStream file_in = new FileInputStream("list");
            ObjectInputStream in = new ObjectInputStream(file_in);
            list = (Lista<Integer>)in.readObject();
            in.close();
            file_in.close();
        }catch (IOException ex){
            ex.printStackTrace();
        }
        catch(ClassNotFoundException ex){
            System.out.println("Class not found");
            ex.printStackTrace();
            return;
        }

        System.out.println(list.is_empty());
        System.out.println(list.toString());
    }
}

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;

public class lista7 {
    public static void main(String[] args){
        String nazwa = args[0];
        String klasa = args[1];
        if(klasa.equals("WydawnictwoCiagle")) {
            try {
                FileInputStream file_in = new FileInputStream(nazwa);
                ObjectInputStream in = new ObjectInputStream(file_in);
                WydawnictwoCiagle w = (WydawnictwoCiagle) in.readObject();
                in.close();
                file_in.close();
                new WydawnictwoCiagle(w.tytul, w.autor, w.rok_wydania);
                System.out.println(w.toString());
            } catch (IOException ex) {
                System.out.println("Plik nie istnieje lub jest pusty");
                new WydawnictwoCiagle("", "", 0);
            } catch (ClassNotFoundException ex) {
                System.out.println("Class not found");
                ex.printStackTrace();
                return;
            }
        }
        else if(klasa.equals("Czasopismo")) {
            try {
                FileInputStream file_in = new FileInputStream(nazwa);
                ObjectInputStream in = new ObjectInputStream(file_in);
                Czasopismo cz = (Czasopismo) in.readObject();
                in.close();
                file_in.close();
                new Czasopismo(cz.tytul, cz.autor, cz.rok_wydania);
                System.out.println(cz.toString());
            } catch (IOException ex) {
                System.out.println("Plik nie istnieje lub jest pusty");
                new Czasopismo("", "", 0);
            } catch (ClassNotFoundException ex) {
                System.out.println("Class not found");
                ex.printStackTrace();
                return;
            }
        }
    }
}

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;

import static java.lang.Integer.parseInt;

public class WydawnictwoCiagle extends Ksiazka {
    String tytul;
    String autor;
    int rok_wydania;

    public WydawnictwoCiagle(String t, String a, int r){
        tytul = t;
        autor = a;
        rok_wydania = r;
        new WydawnictwoCiagle.Action(this);
    }

    @Override
    public String toString(){
        return "tytul: " + tytul + " autor: " + autor + " rok wydania: " + rok_wydania;
    }


    class Action extends JFrame implements ActionListener {
        WydawnictwoCiagle wydawnictwo;
        JFrame frame;
        Container kontener;
        GridLayout layout;
        JLabel autor_etykieta;
        JTextField autor;
        JLabel tytul_etykieta;
        JTextField tytul;
        JLabel wydanie_etykieta;
        JTextField wydanie;
        JButton b;

        public Action(WydawnictwoCiagle wydawnictwo){
            this.wydawnictwo = wydawnictwo;
            frame = new JFrame("Ksiazka");
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            kontener = frame.getContentPane();
            layout = new GridLayout(4, 2);
            kontener.setLayout(layout);

            tytul_etykieta = new JLabel("Tytul");
            kontener.add(tytul_etykieta);
            tytul = new JTextField(WydawnictwoCiagle.this.tytul, 40);
            kontener.add(tytul);

            autor_etykieta = new JLabel("Autor");
            kontener.add(autor_etykieta);
            autor = new JTextField(WydawnictwoCiagle.this.autor, 40);
            kontener.add(autor);

            wydanie_etykieta = new JLabel("Wydanie");
            kontener.add(wydanie_etykieta);
            wydanie = new JTextField(Integer.toString(WydawnictwoCiagle.this.rok_wydania), 40);
            kontener.add(wydanie);

            b = new JButton("Zapisz");
            b.addActionListener(this);
            kontener.add(b);

            frame.pack();
            frame.setVisible(true);
        }

        @Override
        public void actionPerformed(ActionEvent e) {
            wydawnictwo.tytul = tytul.getText();
            wydawnictwo.autor = autor.getText();
            wydawnictwo.rok_wydania = parseInt(wydanie.getText());
            try{
                FileOutputStream file_out = new FileOutputStream("wydawnictwo_ciagle.txt");
                ObjectOutputStream out = new ObjectOutputStream(file_out);
                out.writeObject(wydawnictwo);
                out.close();
                file_out.close();
            } catch (IOException ex){
                ex.printStackTrace();
            }
        }
    }
}

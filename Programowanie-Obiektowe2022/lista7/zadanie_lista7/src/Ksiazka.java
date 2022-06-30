import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Ksiazka implements java.io.Serializable{
    private String tytul;
    private String autor;
    private int rok_wydania;

    @Override
    public String toString(){
        return "tytul: " + tytul + " autor: " + autor + " rok wydania: " + rok_wydania;
    }

}

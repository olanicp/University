import java.util.Comparator;

public class zad1_lista5 {

    public static void main(String[] args) {
        OrderedList<cardDeck<String>> list = new OrderedList<>();
        list.add_element(new Ace<>("as"));
        list.add_element(new Jack<>("walet"));
        list.add_element(new Queen<>("krolowa"));
        list.add_element(new King<>("krol"));

        System.out.println(list.toString());
    }
}

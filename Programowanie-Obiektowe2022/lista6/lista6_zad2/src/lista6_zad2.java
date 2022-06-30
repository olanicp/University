public class lista6_zad2 {
    public static void main(String[] args){
        Lista<Integer> check_list = new Lista<>();
        check_list.add(5);
        check_list.add(7);
        System.out.println("Elementy w liscie check_list: " + check_list.toString());
        System.out.println("Czy check_list zawiera 7?: " + check_list.contains(7));
        System.out.println("Dlugosc listy check_list: " + check_list.size());

        Lista<Integer> new_list = new Lista<>();
        new_list.add(7);
        new_list.add(5);
        new_list.add(4);
        System.out.println("dlugosc listy new_list: " + new_list.size());
        System.out.println("Elementy w liscie new_list: " + new_list.toString());

        System.out.print("\n");
        System.out.print("Metoda toArray(): ");
        Object[] tab = new_list.toArray();
        for(int i = 0; i < tab.length; i++){
            System.out.print(tab[i] + " ");
        }

        System.out.print("\n");
        System.out.print("Metoda toArray() z za malym rozmiarem: ");
        Object[] tab1 = new Object[2];
        Object[] tab2 = new_list.toArray(tab1);
        for(int i = 0; i < tab.length; i++){
            System.out.print(tab2[i] + " ");
        }

        System.out.print("\n");
        System.out.print("Dodanie do listy check_list listy new_list: ");
        check_list.addAll(new_list);
        System.out.println(check_list.toString());
        check_list.clear();
        check_list.add(5);
        check_list.add(7);


        System.out.print("\n");
        System.out.print("Usuniecie wspolnych elementow z listy check_list: ");
        check_list.removeAll(new_list);
        for(Object obj : check_list) {
            System.out.print(obj + " ");
        }
        check_list.clear();
        check_list.add(5);
        check_list.add(7);

        System.out.print("\n");
        System.out.print("Usuniecie wszystkich pozostalych elementow oprocz wspolnych z listy check_list: ");
        check_list.retainAll(new_list);
        for(Object obj : check_list) {
            System.out.print(obj + " ");
        }

        System.out.print("\n");
        check_list.clear();
        System.out.println("Czy lista jest pusta?: " + check_list.isEmpty());
    }
}

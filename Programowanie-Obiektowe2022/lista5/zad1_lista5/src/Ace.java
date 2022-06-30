public class Ace<T> extends cardDeck<T>{
    public Ace(T value){
        super(value);
    }
    @Override
    public int compareTo(cardDeck<T> o) {
        if(o instanceof Ace){
            return 0;
        }else{
            return -1;
        }
    }
}

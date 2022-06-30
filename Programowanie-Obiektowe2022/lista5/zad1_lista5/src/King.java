public class King<T> extends cardDeck<T>{
    public King(T value){
        super(value);
    }
    @Override
    public int compareTo(cardDeck<T> o) {
        if(o instanceof King){
            return 0;
        }else if(o instanceof Ace){
            return 1;
        }
        else{
            return -1;
        }
    }
}
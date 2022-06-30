public class Queen<T> extends cardDeck<T>{
    public Queen(T value){
        super(value);
    }
    @Override
    public int compareTo(cardDeck<T> o) {
        if(o instanceof Queen){
            return 0;
        }else if(o instanceof King || o instanceof Ace){
            return 1;
        }
        else{
            return -1;
        }
    }
}
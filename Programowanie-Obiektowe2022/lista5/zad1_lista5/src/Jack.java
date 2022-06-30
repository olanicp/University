public class Jack<T> extends cardDeck<T>{
    public Jack(T value){
        super(value);
    }
    @Override
    public int compareTo(cardDeck<T> o) {
        if(o instanceof Jack){
            return 0;
        }else if(o instanceof King || o instanceof Ace || o instanceof Queen){
            return 1;
        }
        else{
            return -1;
        }
    }
}
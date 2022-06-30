public class cardDeck<T> implements Comparable<cardDeck<T>>{
    T value;
    public cardDeck(T value){
        this.value = value;
    }
    @Override
    public int compareTo(cardDeck<T> o) {
        return -1;
    }

    @Override
    public String toString(){ return value + " ";}
}
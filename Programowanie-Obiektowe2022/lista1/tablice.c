#include <stdio.h>
#include <stdlib.h>

typedef int typ;

typedef struct tablica{
	struct tablica* prawy;
	struct tablica* lewy;
	int pozycja;
	typ wartosc;
} Tablica;

int min_poz = INT_MAX;

Tablica* ustawianie_ostatniego(Tablica* t){
	while (t -> pozycja > min_poz) t = t -> lewy;
	return t;
}

Tablica* nowa_tablica(int pozycja, typ wartosc){
	Tablica* nowa = malloc(sizeof(struct tablica));
	nowa -> prawy = NULL;
	nowa -> lewy = NULL;
	nowa -> pozycja = pozycja;
	nowa -> wartosc = wartosc;

	return nowa;
}


Tablica* dodaj(Tablica* t, int poz, typ war){
	if (t == NULL) return nowa_tablica(poz, war);
	int odleglosc = abs(poz - t -> pozycja);
	int pozycja = t -> pozycja;
	if (poz > t -> pozycja){
		for (int i = 0; i < odleglosc; i++) {
			pozycja++;
			if(t -> prawy == NULL) t -> prawy = nowa_tablica(pozycja, war);
			t -> prawy -> lewy = t;
			t = t -> prawy;
		}
	}
	else{
		for (int i = 0; i < odleglosc; i++) {
			pozycja--;
			if (t -> lewy == NULL) t -> lewy = nowa_tablica(pozycja, war);
			t -> lewy -> prawy = t;
			t = t -> lewy;
		}
	}
	if (poz < min_poz) min_poz = poz;
	t -> wartosc = war;
	return t;
}

void print(Tablica* t){
	t = ustawianie_ostatniego(t);
	while (t != NULL){
		printf("pozycja: %d\twartosc:%d\n", t -> pozycja, t -> wartosc);
		t = t -> prawy;
	}
}

void indeks(Tablica* t, int i){
	t = ustawianie_ostatniego(t);
	while (t != NULL) {
		if(t -> pozycja == i) printf("pozycja: %d\twartosc:%d\n", t -> pozycja, t -> wartosc);
		t = t -> prawy;
	}
}

int main(){
	Tablica* n = NULL;
	n = dodaj(n, 2, -1);
	n = dodaj(n, -3, 7);
	n = dodaj(n, 5, 2);
	n = dodaj(n, 3, 9);
	print(n);
	indeks(n, 3);
}

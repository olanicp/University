#include <stdio.h>
#include <stdlib.h>
#include<math.h>

typedef struct ulamek{
    int licznik;
    int mianownik;
}Ulamek;

Ulamek* inicjuj(int l, int m){
    Ulamek *nowyUlamek = malloc(sizeof(struct ulamek));
    nowyUlamek -> licznik = l;
    nowyUlamek -> mianownik = m;
    return nowyUlamek;
}

int NWD(int licznik, int mianownik){
    int temp;
    while(mianownik != 0){
        temp = mianownik;
        mianownik = licznik % mianownik;
        licznik = temp;
    }
    return licznik;
}

Ulamek* nowy_ulamek(int l, int m){
    int nwd = NWD(l, m);
    l /= nwd;
    m /= nwd;
    return inicjuj(l, m);
}

void show(Ulamek *nowyUlamek){
    printf("%d / %d", nowyUlamek -> licznik, nowyUlamek -> mianownik);
}

Ulamek* dodawanieW(Ulamek *pierwszy, Ulamek *drugi){
    int wspolnyM = 0, nowyL = 0;
    Ulamek *wynik;
    if(pierwszy -> mianownik == drugi -> mianownik){
        nowyL = (pierwszy -> licznik) + (drugi -> licznik);
        wynik = nowy_ulamek(nowyL, (pierwszy -> mianownik));
    }else{
        wspolnyM = (pierwszy -> mianownik) * (drugi -> mianownik);
        nowyL = (pierwszy -> licznik) * (drugi -> mianownik) + (drugi -> licznik) * (pierwszy -> mianownik);
        wynik = nowy_ulamek(nowyL, wspolnyM);
    }
    return wynik;
}

Ulamek* odejmowanieW(Ulamek *pierwszy, Ulamek *drugi){
    int wspolnyM = 0, nowyL = 0;
    Ulamek *wynik;
    if(pierwszy -> mianownik == drugi -> mianownik){
        nowyL = (pierwszy -> licznik) - (drugi -> licznik);
        wynik = nowy_ulamek(nowyL, (pierwszy -> mianownik));
    }else{
        wspolnyM = (pierwszy -> mianownik) * (drugi -> mianownik);
        nowyL = (pierwszy -> licznik) * (drugi -> mianownik) - (drugi -> licznik) * (pierwszy -> mianownik);
        wynik = nowy_ulamek(nowyL, wspolnyM);
    }
    return wynik;
}

Ulamek* mnozenieW(Ulamek *pierwszy, Ulamek *drugi){
    Ulamek *wynik;
    int wspolnyM = 0, nowyL = 0;
    wspolnyM = (pierwszy -> mianownik) * (drugi -> mianownik);
    nowyL = (pierwszy -> licznik) * (drugi -> licznik);
    wynik = nowy_ulamek(nowyL, wspolnyM);
    return wynik;
}

Ulamek* dzielenieW(Ulamek *pierwszy, Ulamek *drugi){
    Ulamek *wynik;
    int wspolnyM = 0, nowyL = 0;
    wspolnyM = (pierwszy -> mianownik) * (drugi -> licznik);
    nowyL = (pierwszy -> licznik) * (drugi -> mianownik);
    wynik = nowy_ulamek(nowyL, wspolnyM);
    return wynik;
}

void dodawanieV(Ulamek *pierwszy, Ulamek *drugi){
    int wspolnyM = 0, nowyL = 0;
    if(pierwszy -> mianownik == drugi -> mianownik){
        nowyL = (pierwszy -> licznik) + (drugi -> licznik);
        drugi -> licznik = nowyL;
    }else{
        wspolnyM = (pierwszy -> mianownik) * (drugi -> mianownik);
        nowyL = (pierwszy -> licznik) * (drugi -> mianownik) + (drugi -> licznik) * (pierwszy -> mianownik);
        drugi -> licznik = nowyL;
        drugi -> mianownik = wspolnyM;
    }
}

void odejmowanieV(Ulamek *pierwszy, Ulamek *drugi){
    int wspolnyM = 0, nowyL = 0;
    if(pierwszy -> mianownik == drugi -> mianownik){
        nowyL = (pierwszy -> licznik) - (drugi -> licznik);
        drugi -> licznik = nowyL;
    }else{
        wspolnyM = (pierwszy -> mianownik) * (drugi -> mianownik);
        nowyL = (pierwszy -> licznik) * (drugi -> mianownik) - (drugi -> licznik) * (pierwszy -> mianownik);
        drugi -> licznik = nowyL;
        drugi -> mianownik = wspolnyM;
    }
}

void mnozenieV(Ulamek *pierwszy, Ulamek *drugi){
    int wspolnyM = 0, nowyL = 0;
    wspolnyM = (pierwszy -> mianownik) * (drugi -> mianownik);
    nowyL = (pierwszy -> licznik) * (drugi -> licznik);
    drugi -> licznik = nowyL;
    drugi -> mianownik = wspolnyM;
}

Ulamek* dzielenieV(Ulamek *pierwszy, Ulamek *drugi){
    int wspolnyM = 0, nowyL = 0;
    wspolnyM = (pierwszy -> mianownik) * (drugi -> licznik);
    nowyL = (pierwszy -> licznik) * (drugi -> mianownik);
    drugi -> licznik = nowyL;
    drugi -> mianownik = wspolnyM;
}

int main(){
    Ulamek *pwr = nowy_ulamek(0,1);
    Ulamek *dwr = nowy_ulamek(0,2);
    Ulamek *w = dodawanieW(pwr, dwr);
    show(w);
    return 0;
}

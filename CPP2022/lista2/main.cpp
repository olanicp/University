#include <iostream>
#include "tablica.h"

using namespace std;

int main(){
    zmienna Z1 = zmienna();
    zmienna Z2 = zmienna("dwa2_");
    zmienna Z3 = zmienna("trzy3", 3.0);
    zmienna Z4 = zmienna("cztery_", 4.0);

    zbior_zmiennych Tablica = zbior_zmiennych(5);

    Tablica.wstaw(Z1, 0);
    Tablica.wstaw(Z2, 1);
    Tablica.wstaw(Z3, 2);
    Tablica.wstaw(Z4, 3);

    Tablica.wypisz();

    Tablica.usun(Z1);
    cout<<endl;

    Tablica.wypisz();

    Tablica.usun(Z3);
    cout<<endl;

    Tablica.wypisz();
    cout<<endl;

    cout<<Z4.getWartosc();
    cout<<endl;
    Z4.setWartosc(5);
    cout<<Z4.getWartosc();
    cout<<endl;

//    zmienna Z5 = zmienna("2a");
//    Tablica.wstaw(Z5, 4);

    return 0;
}

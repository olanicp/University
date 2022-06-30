#include <iostream>
#include "kolejka.h"

using namespace std;

int main(){

    kolejka kol1 = kolejka(2);
    kol1.wstaw("moj");
    kol1.wstaw("program");
    cout << kol1.z_przodu() << "\tdlugosc: " << kol1.dlugosc();
    cout << endl;
    //kol1.wstaw("z c++");

    kolejka kol2 = kolejka({"mam", "na", "imie", "ola"});
    cout << kol2.z_przodu();
    cout << endl;

    kolejka kol3;
    kol3 = kol2;
    cout << kol3.z_przodu();
    cout << endl;

    kolejka kol4;
    kol4 = move(kol3);
    cout << kol4.z_przodu() << "\tdlugosc: " << kol4.dlugosc();
    cout << endl;
    kol4.usun();
    cout << kol4.z_przodu() << "\tdlugosc: " << kol4.dlugosc();


    return 0;
}

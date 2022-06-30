#include<iostream>
#include<iomanip>
#include "error.hpp"
#include "wymierne.hpp"
using namespace std;
using namespace obliczenia;

wymierna::wymierna(int l, int m){
    if(m == 0) throw equalsZero();
    if(m < 0){
        //cout << "Mianownik ujemny. Nastapilo przeniesienie znaku do licznika"<<endl;
        l *= -1;
        m *= -1;
    }
    int nwd = NWD(l, m);
    licz = l / nwd;
    mian = m / nwd;
}

int wymierna::NWD(int licznik, int mianownik){
    int temp;
    while(mianownik != 0){
        temp = mianownik;
        mianownik = licznik % mianownik;
        licznik = temp;
    }
    if(licznik < 0) licznik *= -1;
    return licznik;
}

wymierna obliczenia::operator+(const wymierna &w, const wymierna &v){
    wymierna wynik(1,1);
    wynik.mian = w.mian * v.mian;
    wynik.licz = (w.licz * v.mian) + (v.licz * w.mian);
    int nwd = wynik.NWD(wynik.licz, wynik.mian);
    if(nwd != 1){
        wynik.licz = wynik.licz / nwd;
        wynik.mian = wynik.mian / nwd;
    }

    return wynik;
}

wymierna obliczenia::operator-(const wymierna &w, const wymierna &v){
    wymierna wynik(1,1);
    wynik.mian = w.mian * v.mian;
    wynik.licz = (w.licz * v.mian) - (v.licz * w.mian);
    int nwd = wynik.NWD(wynik.licz, wynik.mian);
    if(nwd != 1){
        wynik.licz = wynik.licz / nwd;
        wynik.mian = wynik.mian / nwd;
    }

    return wynik;
}

wymierna obliczenia::operator*(const wymierna &w, const wymierna &v){
    wymierna wynik(1,1);
    wynik.licz = w.licz * v.licz;
    wynik.mian = w.mian * v.mian;
    int nwd = wynik.NWD(wynik.licz, wynik.mian);
    if(nwd != 1){
        wynik.licz = wynik.licz / nwd;
        wynik.mian = wynik.mian / nwd;
    }

    return wynik;
}

wymierna obliczenia::operator/(const wymierna &w, const wymierna &v){
    wymierna wynik(1,1);
    wynik.licz = w.licz * v.mian;
    wynik.mian = w.mian * v.licz;
    if(wynik.mian < 0){
        wynik.licz *= -1;
        wynik.mian *= -1;
    }
    int nwd = wynik.NWD(wynik.licz, wynik.mian);
    if(nwd != 1){
        wynik.licz = wynik.licz / nwd;
        wynik.mian = wynik.mian / nwd;
    }

    return wynik;
}

wymierna obliczenia::operator-(const wymierna &w){
    wymierna wynik(w.licz * -1, w.mian);
    return wynik;
}

wymierna obliczenia::operator!(const wymierna &w){
    wymierna wynik(1,1);
    if(w.licz < 0){
        wynik.licz = w.mian * -1;
        wynik.mian = w.licz * -1;
    }else{
        wynik.licz = w.mian;
        wynik.mian = w.licz;
    }

    return wynik;
}

ostream& obliczenia::operator<<(ostream &wy, const wymierna &w){
    //wy <<"postac ulamkowa: "<< w.licz << " / " << w.mian << '\t';
    float wynik = (float)w.licz / w.mian;
    wy << fixed << setprecision(5) << wynik << endl;
    return wy;
}

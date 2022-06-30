#include <iostream>
#include <string>
#include "kolejka.h"

using namespace std;

kolejka::kolejka(int innaPojemnosc){
    pojemnosc = innaPojemnosc;
    tab = new string[pojemnosc];
}

kolejka::kolejka()
    :kolejka(1)
{}

kolejka::~kolejka(){
    delete[] tab;
}

kolejka::kolejka(initializer_list<string> kol){
    tab = new string[kol.size()];
    copy(kol.begin(), kol.end(), tab);
    pojemnosc = kol.size();
    ile = kol.size();
}

kolejka::kolejka(const kolejka &kol){
    tab = new string[kol.pojemnosc];
    copy(kol.tab, kol.tab + kol.pojemnosc, tab);
    pojemnosc = kol.pojemnosc;
    poczatek = kol.poczatek;
    ile = kol.ile;
}

kolejka::kolejka(kolejka &&kol){
    pojemnosc = kol.pojemnosc;
    poczatek = kol.poczatek;
    ile = kol.ile;
    tab = kol.tab;

    delete[] kol.tab;
    kol.tab = nullptr;
}

kolejka& kolejka::operator=(kolejka &kol){
    if( this != &kol){
        delete[] tab;
        tab = new string[kol.pojemnosc];
        copy(kol.tab, kol.tab + kol.pojemnosc, tab);
        pojemnosc = kol.pojemnosc;
        poczatek = kol.poczatek;
        ile = kol.ile;
    }
    return *this;
}

kolejka& kolejka::operator=(kolejka &&kol){
    if(this != &kol){
        delete[] tab;
        pojemnosc = kol.pojemnosc;
        poczatek = kol.poczatek;
        ile = kol.ile;
        tab = kol.tab;
        kol.tab = nullptr;
    }
    return *this;
}

void kolejka::wstaw(string word){
    if(ile < pojemnosc){
        tab[ile] = word;
        ile++;
    }else{
        throw invalid_argument("kolejka jest pelna");
    }
}

void kolejka::usun(){
    if(ile > 0){
        for(int i = poczatek; i < ile - 1; i++){
            tab[i] = tab[i + 1];
        }
        ile--;
    }else{
        throw invalid_argument("kolejka jest pusta");
    }
}

string kolejka::z_przodu(){
    if(ile > 0){
        return tab[poczatek];
    }else{
        throw invalid_argument("kolejka jest pusta");
    }
}

int kolejka::dlugosc(){
    return ile;
}


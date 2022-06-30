#include <iostream>
#include "tablica.h"

zmienna::zmienna(){
        nazwa = '_';
    }
zmienna::zmienna(string innaNazwa){
        if(sprawdzNazwe(innaNazwa)) nazwa = innaNazwa;
        else throw invalid_argument("Niepoprawna nazwa zmiennej");
        wartosc = 0;
    }
zmienna::zmienna(string innaNazwa, double innaWartosc){
        if(sprawdzNazwe(innaNazwa)) nazwa = innaNazwa;
        else throw invalid_argument("Niepoprawna nazwa zmiennej");
        setWartosc(innaWartosc);
    }
void zmienna::setWartosc(double innaWartosc){
        wartosc = innaWartosc;
    }
double zmienna::getWartosc(){
        return wartosc;
    }
string zmienna::getNazwa(){
        return nazwa;
    }
bool zmienna::sprawdzNazwe(string innaNazwa){
        if(innaNazwa.empty()) return false;
        if((int)innaNazwa[0] >= 48 && (int)innaNazwa[0] <= 57) return false;
        bool litera = false;
        bool cyfra = false;
        bool podkreslenie = false;
        for(int i = 0; i < innaNazwa.length(); i++){
            if(((int)innaNazwa[i] >= 65 && (int)innaNazwa[i] <= 90) || ((int)innaNazwa[i] >= 97 && (int)innaNazwa[i] <= 122))
                litera = true;
            if((int)innaNazwa[i] >= 48 && (int)innaNazwa[i] <= 57 && i != 0)
                cyfra = true;
            if((int)innaNazwa[i] == 95)
                podkreslenie = true;
        }
        if(litera || cyfra || podkreslenie) return true;
        return false;
    }

zbior_zmiennych::zbior_zmiennych(int rozmiar):n(rozmiar){
    if(rozmiar < 0){
        throw invalid_argument("Zly rozmiar tablicy");
    }
        tab = new zmienna[rozmiar];
    }
zbior_zmiennych::~zbior_zmiennych(){
        delete[] tab;
    }
void zbior_zmiennych::wstaw(zmienna zm, int indeks){
        tab[indeks] = zm;
        if(indeks >= n){
            throw invalid_argument("Indeks wykracza poza pamiec");
        }
    }
bool zbior_zmiennych::czyZnajduje(zmienna zm){
        for(int i = 0; i < n; i++){
          if(zm.getNazwa() != tab[i].getNazwa())
                return true;
        }
        return false;
    }
void zbior_zmiennych::wypisz(){
        for(int i = 0; i < n; i++){
            cout<<tab[i].getWartosc()<<" ";
        }
    }
void zbior_zmiennych::usun(zmienna zm){
    int temp = 0;
        for(int i = 0; i < n - 1; i++){
            if(tab[i].getWartosc() == zm.getWartosc()) temp = i;
        }
        for(int i = temp; i < n - 1; i++){
            tab[i] = tab[i+1];
        }
    }

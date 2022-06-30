#include<iostream>
#include<vector>
#include "zmienna.hpp"
using namespace std;

zmienna::zbior_t zmienna::zbior;

zmienna::zmienna(string innaNazwa){
    nazwa = innaNazwa;
}

void zmienna::dodawanie(string innaNazwa, double innaWartosc){
    for(int i = 0; i < zbior.size(); i++){
        if(innaNazwa == zbior[i].first){
            throw "Variable has been already declared in this set";
            return;
        }
    }
    zbior.push_back(make_pair(innaNazwa, innaWartosc));
}

void zmienna::usuwanie(string innaNazwa){
    for(int i = 0; i < zbior.size(); i++){
        if(innaNazwa == zbior[i].first){
            zbior.erase(i + zbior.begin());
            return;
        }
    }
    throw "Variable does not exist in this set";
}

void zmienna::modyfikacja(string innaNazwa, double innaWartosc){
    usuwanie(innaNazwa);
    dodawanie(innaNazwa, innaWartosc);
}

double zmienna::oblicz(){
    for(int i = 0; i < zbior.size(); i++){
        if(nazwa == zbior[i].first){
            return zbior[i].second;
        }
    }
}

string zmienna::zapis(){
    return nazwa;
}


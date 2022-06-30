#include<iostream>
#include "liczba.hpp"
using namespace std;

liczba::liczba(double w){
    wartosc = w;
}

double liczba::oblicz(){
    return wartosc;
}

string liczba::zapis(){
    return to_string(wartosc);
}

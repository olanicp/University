#ifndef ZMIENNA_HPP_INCLUDED
#define ZMIENNA_HPP_INCLUDED
#include<iostream>
#include<vector>
#include "wyrazenie.hpp"
using namespace std;

class zmienna : public wyrazenie{
protected:
    string nazwa;
private:
    typedef vector <pair <string, double>> zbior_t;
    static zbior_t zbior;
public:
    zmienna(string innaNazwa);
    static void dodawanie(string innaNazwa, double innaWartosc);
    static void usuwanie(string innaNazwa);
    static void modyfikacja(string innaNazwa, double innaWartosc);
    double oblicz() override;
    string zapis() override;
};

#endif // ZMIENNA_HPP_INCLUDED

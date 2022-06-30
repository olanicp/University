#ifndef STALA_HPP_INCLUDED
#define STALA_HPP_INCLUDED
#include<iostream>
#include<math.h>
#include "wyrazenie.hpp"
using namespace std;

class stala : public wyrazenie{
protected:
    string nazwa;
    double wartosc;
public:
    stala(string innaNazwa, double innaWartosc)
        : nazwa(innaNazwa), wartosc(innaWartosc){};
    double oblicz() override;
    string zapis() override;
};

class pi : public stala{
public:
    pi() : stala("pi", M_PI){};
};

class e : public stala{
    public:
    e() : stala("e", M_E){};
};

class fi : public stala{
    public:
    fi() : stala("fi", 1.6180339887){};
};

#endif // STALA_HPP_INCLUDED

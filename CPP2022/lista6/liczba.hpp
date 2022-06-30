#ifndef LICZBA_HPP_INCLUDED
#define LICZBA_HPP_INCLUDED
#include<iostream>
#include "wyrazenie.hpp"
using namespace std;

class liczba : public wyrazenie{
protected:
    double wartosc;
public:
    liczba(double w);
    double oblicz() override;
    string zapis() override;
};


#endif // LICZBA_HPP_INCLUDED

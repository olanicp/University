#ifndef WYRAZENIE_HPP_INCLUDED
#define WYRAZENIE_HPP_INCLUDED
#include<iostream>
using namespace std;

class wyrazenie{
public:
    virtual double oblicz() = 0;
    virtual string zapis() = 0;
};

#endif // WYRAZENIE_HPP_INCLUDED

#ifndef KOLORTRANSPARENTNY_HPP_INCLUDED
#define KOLORTRANSPARENTNY_HPP_INCLUDED
#include <iostream>
#include "kolor.hpp"
using namespace std;

class kolortransparentny : public kolor{
    int alfa;
public:
    kolortransparentny();
    kolortransparentny(int r, int g, int b, int a);
    void setAlfa(int a);
    double getAlfa();
};


#endif // KOLORTRANSPARENTNY_HPP_INCLUDED

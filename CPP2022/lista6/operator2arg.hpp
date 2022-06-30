#ifndef OPERATOR2ARG_HPP_INCLUDED
#define OPERATOR2ARG_HPP_INCLUDED
#include<iostream>
#include "operator1arg.hpp"
using namespace std;

class operator2arg : public operator1arg{
protected:
    wyrazenie *o2;
public:
    operator2arg(wyrazenie *inneO1, wyrazenie *inneO2)
        : operator1arg(inneO1), o2(inneO2){};
};

class dodaj : public operator2arg{
public:

    dodaj(wyrazenie *o1, wyrazenie *o2)
        : operator2arg(o1, o2){};
    double oblicz() override;
    string zapis() override;
};

class odejmij : public operator2arg{
public:
    odejmij(wyrazenie *o1, wyrazenie *o2)
        : operator2arg(o1, o2){};
    double oblicz() override;
    string zapis() override;
};

class mnoz : public operator2arg{
public:
    mnoz(wyrazenie *o1, wyrazenie *o2)
        : operator2arg(o1, o2){};
    double oblicz() override;
    string zapis() override;
};

class dziel : public operator2arg{
public:
    dziel(wyrazenie *o1, wyrazenie *o2)
        : operator2arg(o1, o2){};
    double oblicz() override;
    string zapis() override;
};

#endif // OPERATOR2ARG_HPP_INCLUDED

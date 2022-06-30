#ifndef OPERATOR1ARG_HPP_INCLUDED
#define OPERATOR1ARG_HPP_INCLUDED
#include<iostream>
#include "wyrazenie.hpp"
using namespace std;

class operator1arg : public wyrazenie{
protected:
    wyrazenie *o1;
public:
    operator1arg(wyrazenie *inneO1);
};

class sinn : public operator1arg{
public:
    sinn(wyrazenie *o1) : operator1arg(o1){};
    double oblicz() override;
    string zapis() override;
};

class bezwzgl : public operator1arg{
public:
    bezwzgl(wyrazenie *o1) : operator1arg(o1){};
    double oblicz() override;
    string zapis() override;
};

class cosn : public operator1arg{
public:
    cosn(wyrazenie *o1) : operator1arg(o1){};
    double oblicz() override;
    string zapis() override;
};

class przeciw : public operator1arg{
    public:
    przeciw(wyrazenie *o1) : operator1arg(o1){};
    double oblicz() override;
    string zapis() override;
};

class expo : public operator1arg{
    public:
    expo(wyrazenie *o1) : operator1arg(o1){};
    double oblicz() override;
    string zapis() override;
};

class ln : public operator1arg{
    ln(wyrazenie *o1) : operator1arg(o1){};
    double oblicz() override;
    string zapis() override;
};

#endif // OPERATOR1ARG_HPP_INCLUDED

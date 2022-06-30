#ifndef KOLOR_HPP_INCLUDED
#define KOLOR_HPP_INCLUDED
#include <iostream>
using namespace std;

class kolor{
protected:
    int r, g, b;
public:
    kolor();
    kolor(int otherR, int otherG, int otherB);
    void setR(int otherR);
    void setG(int otherG);
    void setB(int otherB);
    float getR();
    float getG();
    float getB();
    void lighten(int value);
    void darken(int value);
    static kolor sum(kolor &k1, kolor &k2);
};


#endif // KOLOR_HPP_INCLUDED

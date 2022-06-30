#ifndef PUNKT_HPP_INCLUDED
#define PUNKT_HPP_INCLUDED
#include<iostream>
using namespace std;

class punkt{
protected:
    double x, y;
public:
    punkt();
    punkt(double otherX, double otherY);
    void setX(double otherX);
    void setY(double otherY);
    double getX();
    double getY();
    double odleglosc(punkt &p);
    static bool wspolliniowe(punkt &p1, punkt &p2, punkt &p3);
};

#endif // PUNKT_HPP_INCLUDED

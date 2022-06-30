#ifndef WEKTOR2D_HPP_INCLUDED
#define WEKTOR2D_HPP_INCLUDED
#include <iostream>
using namespace std;

class wektor2d{
    double x, y;
public:
    wektor2d(double otherX, double otherY);
    double getX();
    double getY();
};

#endif // WEKTOR2D_HPP_INCLUDED

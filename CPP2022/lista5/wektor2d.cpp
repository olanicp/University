#include <iostream>
#include "wektor2d.hpp"
using namespace std;

wektor2d::wektor2d(double otherX, double otherY){
    x = otherX;
    y = otherY;
}

double wektor2d::getX(){
    return x;
}

double wektor2d::getY(){
    return y;
}

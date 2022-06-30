#include<iostream>
#include "wektor3d.hpp"
#include "wektor2d.hpp"
using namespace std;

wektor3d::wektor3d(double otherX, double otherY, double otherZ)
    : wektor2d(otherX, otherY)
{
    z = otherZ;
}

double wektor3d::getZ(){
    return z;
}

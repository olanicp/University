#ifndef WEKTOR3D_HPP_INCLUDED
#define WEKTOR3D_HPP_INCLUDED
#include<iostream>
#include "wektor2d.hpp"
using namespace std;

class wektor3d : public wektor2d{
    double z;
public:
    wektor3d(double otherX, double otherY, double otherZ);
    double getZ();
};


#endif // WEKTOR3D_HPP_INCLUDED

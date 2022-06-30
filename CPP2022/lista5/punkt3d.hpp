#ifndef PUNKT3D_HPP_INCLUDED
#define PUNKT3D_HPP_INCLUDED
#include<iostream>
#include "punkt2d.hpp"
#include "wektor3d.hpp"
using namespace std;

class punkt3d : public punkt2d{
    double z;
public:
    punkt3d(double otherX, double otherY, double otherZ);
    double getZ();
    void moveP(wektor3d &w);
    double odleglosc(punkt3d &p);
    static bool wspolliniowe(punkt3d &p1, punkt3d &p2, punkt3d &p3);
};


#endif // PUNKT3D_HPP_INCLUDED

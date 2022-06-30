#ifndef PUNKT2D_HPP_INCLUDED
#define PUNKT2D_HPP_INCLUDED
#include<iostream>
#include "punkt.hpp"
#include "wektor2d.hpp"
using namespace std;

class punkt2d : public punkt{
public:
    punkt2d(double otherX, double otherY);
    void moveP(wektor2d &w);
};


#endif // PUNKT2D_HPP_INCLUDED

#include<iostream>
#include "punkt2d.hpp"
#include "punkt.hpp"
using namespace std;

punkt2d::punkt2d(double otherX, double otherY)
    : punkt(otherX, otherY)
{}

void punkt2d::moveP(wektor2d &w){
    x = x + w.getX();
    y = y + w.getY();
}

#include<iostream>
#include<math.h>
#include "punkt3d.hpp"
#include "punkt2d.hpp"
using namespace std;

punkt3d::punkt3d(double otherX, double otherY, double otherZ)
    : punkt2d(otherX, otherY)
{
    z = otherZ;
}

double punkt3d::getZ(){
    return z;
}

void punkt3d::moveP(wektor3d &w){
    x = x + w.getX();
    y = y + w.getY();
    z = z + w.getZ();
}

double punkt3d::odleglosc(punkt3d &p){
    double d = sqrt(pow((p.x - x), 2) + pow((p.y - y), 2) + pow((p.z - z), 2));
    return d;
}

    bool punkt3d::wspolliniowe(punkt3d &p1, punkt3d &p2, punkt3d &p3){
        if((p2.y - p1.y) == 0){
            if((p3.y - p1.y) == 0) return true;
            else return false;
        }else{
            double a = (p2.x - p1.x) / (p2.y - p1.y);
            double b = (p3.x - p1.x) / (p3.y - p1.y);
            if(a == b) return true;
            return false;
        }
    }

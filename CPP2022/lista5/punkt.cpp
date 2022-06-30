#include<iostream>
#include<math.h>
#include "punkt.hpp"
using namespace std;
punkt::punkt()
    : x(0), y(0)
{}

punkt::punkt(double otherX, double otherY)
    : x(otherX), y(otherY)
{}

void punkt::setX(double otherX){
    x = otherX;
}

void punkt::setY(double otherY){
    y = otherY;
}

double punkt::getX(){
    return x;
}

double punkt::getY(){
    return y;
}

double punkt::odleglosc(punkt &p){
    double d = sqrt(pow((p.x - x), 2) + pow((p.y - y), 2));
    return d;
}

bool punkt::wspolliniowe(punkt &p1, punkt &p2, punkt &p3){
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

#include <iostream>
#include <cmath>
#include "kolor.hpp"
using namespace std;

kolor::kolor()
    :r(0), g(0), b(0)
{}

kolor::kolor(int otherR, int otherG, int otherB){
    try{
        r = otherR;
        g = otherG;
        b = otherB;
        if(r > 255 || r < 0 || g > 255 || g < 0 || b > 255 || b < 0){
            throw("out of range");
        }
    }
    catch(...){
        cout << "Values are either larger or smaller than given range";
    }
}

void kolor::setR(int otherR){
        try{
        r = otherR;
        if(r > 255 || r < 0 ){
            throw(r);
        }
    }catch(int x){
        cout << "Value is out of range";
        cout << "Given: " << x;
    }
}

void kolor::setG(int otherG){
    try{
        g = otherG;
        if(g > 255 || g < 0 ){
            throw(r);
        }
    }catch(int x){
        cout << "Value is out of range";
        cout << "Given: " << x;
    }
}

void kolor::setB(int otherB){
    try{
        b = otherB;
        if(r > 255 || r < 0 ){
            throw(r);
        }
    }catch(int x){
        cout << "Value is out of range";
        cout << "Given: " << x;
    }
}

float kolor::getR(){
    return r;
}

float kolor::getG(){
    return r;
}

float kolor::getB(){
    return r;
}

void kolor::lighten(int value){
    r = min(255, r + value);
    g = min(255, g + value);
    b = min(255, b + value);
}

void kolor::darken(int value){
    r = max(0, r - value);
    g = max(0, g - value);
    b = max(0, b - value);
}

kolor kolor::sum(kolor &k1, kolor &k2){
    kolor wynik;
    wynik.r = ((k1.r + k2.r)/2);
    wynik.g = ((k1.g + k2.g)/2);
    wynik.b = ((k1.b + k2.b)/2);
    return wynik;
}

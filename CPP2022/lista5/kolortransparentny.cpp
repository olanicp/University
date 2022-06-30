#include <iostream>
#include "kolortransparentny.hpp"
#include "kolor.hpp"
using namespace std;

kolortransparentny::kolortransparentny()
    : kolor(), alfa(255)
{}

kolortransparentny::kolortransparentny(int r, int g, int b, int a)
    : kolor(r, g, b)
{
    try{
        alfa = a;
        if(alfa > 255 || alfa < 0){
            throw(alfa);
        }
    }catch(int x){
        cout << "Value is out of range";
        cout << "Given: " << x;
    }
}

void kolortransparentny::setAlfa(int a){
    try{
        alfa = a;
        if(alfa > 255 || alfa < 0){
            throw(alfa);
        }
    }catch(int x){
        cout << "Value is out of range";
        cout << "Given: " << x;
    }
}

double kolortransparentny::getAlfa(){
    return alfa;
}

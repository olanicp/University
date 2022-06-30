#include<iostream>
#include<math.h>
#include "operator1arg.hpp"
using namespace std;

operator1arg::operator1arg(wyrazenie *inneO1){
    o1 = inneO1;
}

double sinn::oblicz(){
    return sin(o1->oblicz());
}

string sinn::zapis(){
    return "sin(" + o1->zapis() + ")";
}

double bezwzgl::oblicz(){
    return abs(o1->oblicz());
}

string bezwzgl::zapis(){
    return "abs|" + o1->zapis() + "|";
}

double cosn::oblicz(){
    return cos(o1->oblicz());
}

string cosn::zapis(){
    return "cos(" + o1->zapis() + ")";
}

double przeciw::oblicz(){
    return -1*(o1->oblicz());
}

string przeciw::zapis(){
    return "-1 * (" + o1->zapis() + ")";
}

double expo::oblicz(){
    return exp(o1->oblicz());
}

string expo::zapis(){
    return "e^(" + o1->zapis() + ")";
}

double ln::oblicz(){
    return log(o1->oblicz());
}

string ln::zapis(){
    return "log(" + o1->zapis() + ")";
}

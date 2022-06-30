#include<iostream>
#include "operator2arg.hpp"
using namespace std;

double dodaj::oblicz(){
    return (o1->oblicz() + o2->oblicz());
}

string dodaj::zapis(){
    return  o1->zapis() + " + " + o2->zapis();
}

double odejmij::oblicz(){
    return (o1->oblicz() - o2->oblicz());
}

string odejmij::zapis(){
    if(typeid(*o2) == typeid(dodaj)){
        return o1->zapis() + " - (" + o2->zapis() + ")";
    }else{
        return o1->zapis() + " - " + o2->zapis();
    }
}

double mnoz::oblicz(){
    return (o1->oblicz() * o2->oblicz());
}

string mnoz::zapis(){
    string expr = "";
    if(typeid(*o1) == typeid(dodaj) || typeid(*o1) == typeid(odejmij)){
        expr = expr + "(" + o1->zapis() + ")";
    }else{
        expr = expr + o1->zapis();
    }

    if(typeid(*o2) == typeid(dodaj) || typeid(*o2) == typeid(odejmij)){
        expr = expr + " * (" + o2->zapis() + ")";
    }else{
        expr = expr + " * " + o2->zapis();
    }
    return expr;
}

double dziel::oblicz(){
    if(o2->oblicz() == 0) throw "Cannot divide by 0";
    return (o1->oblicz() / o2->oblicz());
}

string dziel::zapis(){
    string expr = "";
    if(typeid(*o1) == typeid(dodaj) || typeid(*o1) == typeid(odejmij) || typeid(*o1) == typeid(mnoz) || typeid(*o1) == typeid(dziel)){
        expr = expr + "(" + o1->zapis() + ")";
    }else{
        expr = expr + o1->zapis();
    }

    if(typeid(*o2) == typeid(dodaj) || typeid(*o2) == typeid(odejmij) || typeid(*o2) == typeid(mnoz) || typeid(*o2) == typeid(dziel)){
        expr = expr + " / (" + o2->zapis() + ")";
    }else{
        expr = expr + " / " + o2->zapis();
    }
    return expr;
}

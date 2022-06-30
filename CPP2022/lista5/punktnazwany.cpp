#include <iostream>
#include "punktnazwany.hpp"
#include "punkt.hpp"
using namespace std;

punktnazwany::punktnazwany()
    : name("")
{}

punktnazwany::punktnazwany(double a, double b, string otherName)
    : punkt(a, b)
{
    setName(otherName);
}

void punktnazwany::setName(string otherName){
    bool flag = true;

    try{
        if((otherName[0] < 'A' || otherName[0] > 'Z') && (otherName[0] < 'a' || otherName[0] > 'z')){
            throw(otherName);
        }
    }catch(string x){
        cout << "String name has to start with a letter" << endl;
        cout << "Given: " << x;
    }

    for(int i = 1; i < otherName.length(); i++){
        if((otherName[i] < 'A' || otherName[i] > 'Z') && (otherName[i] < 'a' || otherName[i] > 'z') && (otherName[i] < '0' || otherName[i] > '9')){
            flag = false;
        }
    }
    try{
        if(flag) name = otherName;
        else throw(name);
    }
    catch(string x){
        cout << "String name has characters other than letters or numbers" << endl;
        cout << "Given: " << x;
    }
}

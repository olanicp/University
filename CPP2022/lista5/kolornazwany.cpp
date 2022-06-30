#include <iostream>
#include "kolortransparentny.hpp"
#include "kolornazwany.hpp"
using namespace std;

kolornazwany::kolornazwany()
    : kolortransparentny(), name("")
{}

kolornazwany::kolornazwany(int r, int g, int b, int alfa, string otherName)
    : kolortransparentny(r, g, b, alfa)
{
    setName(otherName);
}

void kolornazwany::setName(string otherName){
    bool flag = true;
    for(int i = 0; i < otherName.length(); i++){
        if((otherName[i] < 'A' || otherName[i] > 'Z') && (otherName[i] < 'a' || otherName[i] > 'z')){
            flag = false;
        }
    }
    try{
        if(flag) name = otherName;
        else throw(name);
    }
    catch(string x){
        cout << "String name has characters out of range (please put only letters)" << endl;
        cout << "Given: " << x;
    }
}

string kolornazwany::getName(){
    return name;
}

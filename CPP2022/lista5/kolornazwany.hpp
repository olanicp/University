#ifndef KOLORNAZWANY_HPP_INCLUDED
#define KOLORNAZWANY_HPP_INCLUDED
#include <iostream>
#include "kolortransparentny.hpp"
using namespace std;

class kolornazwany : kolortransparentny{
    string name;
public:
    kolornazwany();
    kolornazwany(int r, int g, int b, int alfa, string otherName);
    void setName(string otherName);
    string getName();
};



#endif // KOLORNAZWANY_HPP_INCLUDED

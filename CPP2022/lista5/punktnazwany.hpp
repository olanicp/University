#ifndef PUNKTNAZWANY_HPP_INCLUDED
#define PUNKTNAZWANY_HPP_INCLUDED
#include <iostream>
#include "punkt.hpp"
using namespace std;

class punktnazwany : virtual punkt{
    string name;
public:
    punktnazwany();
    punktnazwany(double a, double b, string otherName);
    void setName(string otherName);
};

#endif // PUNKTNAZWANY_HPP_INCLUDED

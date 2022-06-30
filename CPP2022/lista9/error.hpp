#ifndef ERROR_HPP_INCLUDED
#define ERROR_HPP_INCLUDED
#include <iostream>
using namespace std;

class wyjatek_wymierny : public logic_error{
public:
    wyjatek_wymierny(string error)
        :logic_error(error)
    {}
};

class equalsZero : public wyjatek_wymierny{
public:
    equalsZero()
        :wyjatek_wymierny("Mianownik jest rowny zero")
    {}
};

#endif // ERROR_HPP_INCLUDED

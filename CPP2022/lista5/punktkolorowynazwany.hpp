#ifndef PUNKTKOLOROWYNAZWANY_HPP_INCLUDED
#define PUNKTKOLOROWYNAZWANY_HPP_INCLUDED
#include <iostream>
#include "punktkolorowy.hpp"
#include "punktnazwany.hpp"
using namespace std;

class punktkolorowynazwany : public punktkolorowy, public punktnazwany{
public:
    punktkolorowynazwany(double x, double y, int r, int g, int b, int alfa, string otherName);
};

#endif // PUNKTKOLOROWYNAZWANY_HPP_INCLUDED

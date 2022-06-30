#include <iostream>
#include "punktkolorowynazwany.hpp"
#include "punktkolorowy.hpp"
#include "punktnazwany.hpp"
using namespace std;

punktkolorowynazwany::punktkolorowynazwany(double x, double y, int r, int g, int b, int alfa, string otherName)
    : punktkolorowy(x, y, r, g, b, alfa), punktnazwany(x, y, otherName)
{}

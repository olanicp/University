#ifndef PUNKTKOLOROWY_HPP_INCLUDED
#define PUNKTKOLOROWY_HPP_INCLUDED
#include<iostream>
#include "punkt.hpp"
#include "kolortransparentny.hpp"
using namespace std;

class punktkolorowy : virtual punkt{
    kolortransparentny kolorPunktu;
public:
    punktkolorowy(double x, double y, int r, int g, int b, int alfa);
};

#endif // PUNKTKOLOROWY_HPP_INCLUDED

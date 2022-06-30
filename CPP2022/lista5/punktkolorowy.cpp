#include <iostream>
#include "punktkolorowy.hpp"
#include "punkt.hpp"
#include "kolortransparentny.hpp"

punktkolorowy::punktkolorowy(double x, double y, int r, int g, int b, int alfa)
    : punkt(x, y)
{
    kolorPunktu = kolortransparentny(r, g, b, alfa);
}

#ifndef WYMIERNE_HPP_INCLUDED
#define WYMIERNE_HPP_INCLUDED
#include<iostream>
#include<math.h>
using namespace std;

namespace obliczenia{
    class wymierna{
        int licz, mian;
    public:
        wymierna(int l, int m);
        wymierna(int l)
            :wymierna(l, 1)
        {}

        int NWD(int licznik, int mianownik);

        int getL(){ return licz; }
        int getM(){ return mian; }

        operator double(){ return (double)licz/mian; }
        explicit operator int(){ return round((double)licz/mian); }

        friend wymierna operator+(const wymierna &w, const wymierna &v);
        friend wymierna operator-(const wymierna &w, const wymierna &v);
        friend wymierna operator*(const wymierna &w, const wymierna &v);
        friend wymierna operator/(const wymierna &w, const wymierna &v);
        friend wymierna operator-(const wymierna &w);
        friend wymierna operator!(const wymierna &w);
        friend ostream& operator<<(ostream &wy, const wymierna &w);

    };
}
#endif // WYMIERNE_HPP_INCLUDED

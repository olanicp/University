#include <iostream>
#include <iomanip>
#include "wymierne.hpp"
using namespace std;

int main(){
    obliczenia::wymierna w(2, 5);
    //wymierna blad(3, 0);
    cout << w;
    cout << !w;
    cout << -w;
    obliczenia::wymierna m(2, -4);
    cout << m;
    cout << w + m;
    cout << w - m;
    cout << w * m;
    cout << w / m;

    obliczenia::wymierna b = obliczenia::wymierna(3);
    cout << b;
    obliczenia::wymierna c = obliczenia::wymierna(4, 5);
    double noweC = c;
    cout << noweC << endl;
    int intC = (int)c;
    cout << intC << endl;

    return 0;
}

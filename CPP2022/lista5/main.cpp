#include <iostream>
#include "kolor.hpp"
#include "kolortransparentny.hpp"
#include "kolornazwany.hpp"
#include "punkt.hpp"
#include "punktnazwany.hpp"
#include "punktkolorowy.hpp"
#include "punktkolorowynazwany.hpp"
#include "punkt2d.hpp"
#include "punkt3d.hpp"

using namespace std;

int main(){
    kolor rgb = kolor(256, 0, 0);
    cout << endl;
    kolor black = kolor();
    kolor blue = kolor(0, 0, 255);
    kolor silver = kolor(192, 192, 192);
    silver.lighten(40);
    cout << silver.getR() << "\t" << silver.getG() << "\t" << silver.getB() << endl;
    kolortransparentny transparency = kolortransparentny(132, 232, 100, 40);
    kolornazwany magenta = kolornazwany(255, 0, 255, 0, "magenta");
    cout << "Kolor magenta nazywa sie: " << magenta.getName() << endl;

    punkt x = punkt(0,3);
    punkt y = punkt(2, 4);
    punkt z = punkt(-200, -97);
    double wynik = x.odleglosc(y);
    cout << "odleglosc punktow x i y wynosi: " << wynik << endl;
    if(punkt::wspolliniowe(x, y, z)) cout << "punkty x, y, z sa wspolliniowe" << endl;
    else cout << "punkty x, y, z nie sa wspolliniowe" << endl;


    punktnazwany alfa = punktnazwany(2, 0, "wspolrzedna2");
    punktnazwany beta_blad = punktnazwany(3, 0, "3wspolrzedna3");
    punktnazwany beta = punktnazwany(3, 0, "wspolrzedna3");
    cout << endl;
    double wynik2 = x.odleglosc(y);
    cout << "odleglosc punktow alfa i beta wynosi: " << wynik2 << endl;

    punktkolorowy gamma = punktkolorowy(1, 2, 0, 255, 0, 100);
    punktkolorowynazwany a = punktkolorowynazwany(2, 1, 0, 255, 0, 10, "punktKolorowy");

    wektor2d v = wektor2d(2, 3);
    punkt2d b = punkt2d(1, 2);
    b.moveP(v);
    cout << "Punkt b po transpozycji o wektor v: " << b.getX() << " " << b.getY() << endl;

    wektor3d u = wektor3d(1, 2, 3);
    punkt3d c = punkt3d(1, 2, 3);
    punkt3d d = punkt3d(4, 5, 6);
    punkt3d e = punkt3d(1, 2, 3);
    punkt3d f = punkt3d(1, 2, 3);
    c.moveP(u);
    cout << "Punkt b po transpozycji o wektor v: " << c.getX() << " " << c.getY() << " " << c.getZ() << endl;
    double wynik3 = c.odleglosc(d);
    cout << "odleglosc punktow c i d wynosi: " << wynik3 << endl;
     if(punkt::wspolliniowe(c, e, f)) cout << "punkty c, e, f sa wspolliniowe" << endl;
    else cout << "punkty c, e, f nie sa wspolliniowe" << endl;

    return 0;
}

#include <iostream>
#include "wyrazenie.hpp"
#include "zmienna.hpp"
#include "liczba.hpp"
#include "stala.hpp"
#include "operator1arg.hpp"
#include "operator2arg.hpp"
using namespace std;

int main()
{
    string x;
    zmienna::dodawanie("x", 1);
    wyrazenie *w = new odejmij(new pi(), new dodaj(new liczba(2), new mnoz(new zmienna("x"), new liczba(7))));
    cout << "zapis: " << w->zapis() << "\t wartosc: " << w->oblicz();
    cout<<endl;

    zmienna::modyfikacja("x", 4);
    wyrazenie *expr = new dziel(new mnoz(new odejmij(new zmienna ("x"), new liczba(1)), new zmienna ("x")), new liczba(2));
    cout << "zapis: " << expr->zapis() << "\t wartosc: " << expr->oblicz();
    cout<<endl;

    zmienna::modyfikacja("x", 2);
    wyrazenie *w2 = new dziel(new dodaj(new liczba(3), new liczba(5)), new dodaj(new liczba(2), new mnoz(new zmienna("x"), new liczba(7))));
    cout << "zapis: " << w2->zapis() << "\t wartosc: " << w2->oblicz();
    cout<<endl;

    wyrazenie *expr2 = new dziel(new cosn(new mnoz(new dodaj(new zmienna ("x"), new liczba(1)), new pi())), new expo(new mnoz(new liczba(2), new zmienna("x"))));
    cout << "zapis: " << expr2->zapis() << "\t wartosc: " << expr2->oblicz();
    cout<<endl;

    return 0;
}

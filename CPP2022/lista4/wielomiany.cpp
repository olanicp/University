#include<iostream>
#include "wielomiany.h"

using namespace std;

wielomian::wielomian(int st = 0, double wsp = 1.0)
        :n(st), a(new double [1])
{
    a[0] = 1;
}

wielomian::wielomian(int st, const double wsp[])
    :n(st), a(new double [st + 1])
{
    copy(wsp, wsp + n + 1, a);
}

wielomian::wielomian(initializer_list<double> wsp){
    a = new double[wsp.size()];
    n = wsp.size();
    copy(wsp.begin(), wsp.end(), a);
}

wielomian::wielomian(const wielomian &w){
    a = new double[w.n + 1];
    copy(w.a, w.a + w.n + 1, a);
    n = w.n;
}

wielomian::wielomian(wielomian &&w){
    n = w.n;
    a = w.a;
    delete[] w.a;
    w.a = nullptr;
}

wielomian& wielomian::operator= (const wielomian &w){
    if(this != &w){
        delete[] a;
        a = new double[w.n + 1];
        copy(w.a, w.a + w.n + 1, a);
        n = w.n;
    }
    return *this;
}

wielomian& wielomian::operator= (wielomian &&w){
    if(this != &w){
        delete[] a;
        n = w.n;
        a = w.a;
        w.a = nullptr;
    }
    return *this;
}

wielomian::~wielomian(){
    delete[] a;
}

istream& operator>>(istream &we, wielomian &w){
    for(int i = 0; i <= w.n; i++){
        we >> w.a[i];
    }
    return we;
}

ostream& operator<<(ostream &wy, const wielomian &w){
    for(int i = 0; i <= w.n; i++){
        wy << w.a[i] << " ";
    }
    return wy;
}

wielomian operator+(const wielomian &u, const wielomian &v){
    wielomian wynik;
    int mini = INT_MAX;
    if(u.n < v.n) mini = u.n;
    else mini = v.n;

    if(u.n > v.n) wynik = u;
    else wynik = v;

    for(int i = 0; i <= mini; i++){
        wynik.a[i] = u.a[i] + v.a[i];
    }
    return wynik;
}

wielomian operator-(const wielomian &u, const wielomian &v){
    wielomian wynik;
    int mini = INT_MAX;
    if(u.n < v.n) mini = u.n;
    else mini = v.n;

    if(u.n > v.n) wynik = u;
    else wynik = v;

    for(int i = 0; i <= mini; i++){
        wynik.a[i] = u.a[i] - v.a[i];
    }
    return wynik;
}

wielomian operator*(const wielomian &u, const wielomian &v){
    int rozmiar = u.n + v.n + 1;
    double wsp[rozmiar] = {0};
    for(int i = 0; i <= u.n; i++){
        for(int j = 0; j <= v.n; j++){
            wsp[i+j] = wsp[i + j] + (u.a[i] * v.a[j]);
        }
    }
    wielomian wynik = wielomian(rozmiar - 1, wsp);
    return wynik;
}

wielomian& wielomian::operator +=(const wielomian &v){
    const wielomian w = *this;
    if(this != &v)
        *this = w + v;
    return *this;
}

wielomian& wielomian::operator -=(const wielomian &v){
    const wielomian w = *this;
    if(this != &v)
        *this = w - v;
    return *this;
}

wielomian& wielomian::operator *=(const wielomian &v){
    const wielomian w = *this;
    if(this != &v)
        *this = w * v;
    return *this;
}

wielomian& wielomian::operator *=(double c){
    const wielomian w = *this;
    *this = w * c;
    return *this;
}

double wielomian::operator()(double x) const{
    double suma = 0;
    for(int i = 0; i <= n; i++){
        suma = suma * x +  a[i];
    }
    return suma;
}

double wielomian::operator[](int i) const{
    if(i < 0 || i > n) throw invalid_argument("Indeks wychodzi poza zakres");
    return a[i];
}

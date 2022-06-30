using namespace std;

class zmienna{
    string nazwa;
    double wartosc;
public:
    zmienna();
    zmienna(string innaNazwa);
    zmienna(string innaNazwa, double innaWartosc);
    void setWartosc(double innaWartosc);
    double getWartosc();
    string getNazwa();
    bool sprawdzNazwe(string innaNazwa);
};

class zbior_zmiennych{
    const int n;
    zmienna *tab;
public:
    zbior_zmiennych(int rozmiar);
    ~zbior_zmiennych();
    void wstaw(zmienna zm, int indeks);
    bool czyZnajduje(zmienna zm);
    void wypisz();
    void usun(zmienna zm);

};

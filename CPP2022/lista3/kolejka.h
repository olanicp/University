using namespace std;

class kolejka{
    int pojemnosc, poczatek = 0, ile = 0;
    string *tab;
public:
    kolejka(int innaPojemnosc);
    kolejka();
    ~kolejka();
    kolejka(initializer_list<string> kol);
    kolejka(const kolejka &kol);
    kolejka& operator=(kolejka &kol);
    kolejka(kolejka &&kol);
    kolejka& operator=(kolejka &&kol);
    void wstaw(string word);
    void usun();
    string z_przodu();
    int dlugosc();
};


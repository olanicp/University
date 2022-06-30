using namespace std;

class wielomian{
    int n;
    double *a;
public:
    wielomian(int st, double wsp);
    wielomian(int st, const double wsp[]);
    wielomian(initializer_list<double> wsp);
    wielomian(const wielomian &w);
    wielomian(wielomian &&w);
    wielomian& operator= (const wielomian &w);
    wielomian& operator= (wielomian &&w);
    ~wielomian();
    friend istream& operator>>(istream &we, wielomian &w);
    friend ostream& operator<<(ostream &wy, const wielomian &w);
    friend wielomian operator+(const wielomian &u, const wielomian &v);
    friend wielomian operator-(const wielomian &u, const wielomian &v);
    friend wielomian operator*(const wielomian &u, const wielomian &v);
    wielomian& operator +=(const wielomian &v);
    wielomian& operator -=(const wielomian &v);
    wielomian& operator *=(const wielomian &v);
    wielomian& operator *=(double c);
    double operator()(double x) const;
    double operator[](int i) const;
};


#include <iostream>
#include "wielomiany.h"

using namespace std;

int main(){
    double wsp[4] = {1, 2, 3, 4};
    wielomian wielo = wielomian(3, wsp);
    cout << wielo << endl;

    wielomian www = wielomian(0, 1.0);
    cout << www << endl;

    wielomian dod = wielo + www;
    cout << dod << endl;

    wielomian odejmij = wielo - www;
    cout << odejmij << endl;

    wielomian pomnoz = wielo * www;
    cout << pomnoz << endl;

    double wsp2[2] = {3, 4};
    wielomian wiel = wielomian(1, wsp2);
    wiel += www;
    cout << wiel << endl;

    wiel -= www;
    cout << wiel << endl;

    wiel *= wielo;
    cout << wiel << endl;

    cout << wielo << endl;

    cout << wielo(3) << endl;

    cout << wielo[2] << endl;

    return 0;
}

#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

class wejscie{
public:
    ifstream input;

    wejscie(string nazwa){
        input.open(nazwa);
        if(!input.is_open()){
            perror(("error while opening file " + nazwa).c_str());
            input.close();
        }
    }

    string nastlinia(){
        string linia;
        input >> linia;
        return linia + '\0';
    }

    ~wejscie(){
        input.close();
    }
};

class wyjscie{
public:
    ofstream output;

    wyjscie(string nazwa){
        output.open(nazwa);
        if(!output.good()){
            perror(("error while opening file " + nazwa).c_str());
            output.close();
        }
    }

    void piszlinie(string linia){
        output << linia + "\n";
    }

    ~wyjscie(){
        output.close();
    }
};

string kodowanie(string haslo, int klucz){
	string zakodowane = "";
	int n = haslo.length();
	for(int i = 0; i < n; i++){
		int kod_ascii = (int)haslo[i];
		kod_ascii = (kod_ascii + klucz - 97)%26 + 97;
		char znak = (char)kod_ascii;
		zakodowane = zakodowane + znak;
	}
	return zakodowane;
}

int main(int argc, char *argv[]){
    if(argc != 4){
        cerr << "arguments error";
        return 1;
    }

    string in = argv[1];
    string out = argv[2];
    int key = stoi(argv[3]);

    wejscie entry = wejscie(in);

    string pierwsze = entry.nastlinia();
    string drugie = entry.nastlinia();
    string trzecie = entry.nastlinia();

    cout << pierwsze << endl;
    cout << drugie << endl;
    cout << trzecie << endl;

    wyjscie exit = wyjscie(out);

    cout << kodowanie(pierwsze, key) + " " << kodowanie(drugie, key) + " " << kodowanie(trzecie, key) + " " << endl;

    exit.piszlinie(kodowanie(pierwsze, key));
    exit.piszlinie(kodowanie(drugie, key));
    exit.piszlinie(kodowanie(trzecie, key));

    return 0;
}

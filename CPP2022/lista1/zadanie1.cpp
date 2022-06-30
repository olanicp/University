#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <climits>

std::vector<int64_t> Rozloz(int64_t n){
	std::vector<int64_t> rozklad;
	int64_t pierwsza = 2;
	int64_t pierw = sqrt(n);
	while(n >= 1 && pierwsza <= pierw){
		if(n % pierwsza == 0){
			rozklad.push_back(pierwsza);
			n = n / pierwsza;
		}else{
			if (pierwsza == 2) pierwsza++;
			else pierwsza += 2;
		}
	}
	if(n > 1) rozklad.push_back(n);
	return rozklad;
}

int main (int argc, char *argv[]) {
	if(argc <= 1){
		std::cerr << "Prosze podac argumenty wywolania programu"<< std::endl;
		return 0;	
	}
	for(int j = 1; j < argc; j++){
		int64_t n = std::stoll(argv[j]);
		std::cout << n << " = ";
		std::vector<int64_t> roz;
		if(n == INT64_MIN){
			n = n / 2;
			roz = Rozloz(llabs(n));
			roz.push_back(2);
			std::cout << "-1*";
		}
		else if(n == 1 || n == -1 || n == 0) roz.push_back(0);
		else{
			roz = Rozloz(llabs(n));
			if(n < 0) std::cout << "-1*";
		}
		for(int i = 0; i < roz.size(); i++){
			std::cout << roz[i] << "*";
		}
		std::cout << std::endl;
	}
	return 0;
}

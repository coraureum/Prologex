#include <iostream>

int main (int argc, char *argv[]){
	int Num;
	int Negs = 0;
	for (int Counter = 0; Counter <= 5; Counter++){
		std::cout << "Digite um numero: " << '\n';
		std::cin >> Num;
		if (Num < Negs){
			Negs++;
		}	
	}
	std::cout << "O numero de negativos foi: " << Negs;
	return 0;
}

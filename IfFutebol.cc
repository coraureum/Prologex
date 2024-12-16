#include <iostream>
#include <cmath>
int main (int argc, char *argv[]){
	int Dif, Mad, Ban;
	std::cout << "--------------------\n";
	std::cout << "Bangu vs. Madureira\n";
	std::cout << "--------------------\n";
	std::cout << "Qtde. Gols Bangu: \n";
	std::cin >> Ban;
	std::cout << "Qde Gols Madureira: \n";
	std::cin >> Mad;

	Dif = abs(Ban - Mad);

	if (Dif == 0){
		std::cout << "Empate.\n";
	}
	else if(Dif >= 1 && Dif <= 4){
		std::cout << "Partida normal\n";
	}
	else {
		std::cout << "Goleada!\n";
	}
	return 0;
}

#include <iostream>
#include <cmath>
int main (int argc, char *argv[]){
	int Ban, Mad, Dif;
	std::cout << "Insira a quantidade de gols do Bangu: \n";
	std::cin >> Ban;
	std::cout << "Insira a quantidades de gols do Madureira: \n";
	std::cin >> Mad;

	Dif = abs(Ban - Mad);

	switch (Dif){
		case 0:
		std::cout << "Empate.\n";
		break;
		case 1: case 2: case 3: case 4: 
		std::cout << "Partida normal\n";
		break;
		default:
		std::cout << "Goleada!\n";
		break;
	}
	return 0;
}

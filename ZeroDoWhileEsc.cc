#include <iostream>

int main (int argc, char *argv[]){
	char Sex, Input;
	int Age, Cabelo, CountMa, CountFem;
	CountMa = 0;
	CountFem = 0;
	do {

	std::cout << "Escolhendo pessoas\n";
	std::cout << "Insira o sexo [M/F]: \n";
	std::cin >> Sex;
	std::cout << "Insira a idade: \n";
	std::cin >> Age;
	std::cout << "Insira a cor do cabelo: \n [1] Preto\n [2]Castanho\n [3] Loiro\n [4] Ruivo:\n";
	std::cin >> Cabelo;
	std::cout << "Deseja continuar? [S/N]\n";
	std::cin >> Input;

	if (Sex == 'F' && Cabelo == 3 && Age >= 25 && Age <= 30){
		CountFem++;
	}
	else if (Sex == 'M' && Cabelo == 2 && Age > 18){
		CountMa++;

	}
	}while (Input != 'N');
	std::cout << "\nMulheres entre 25 a 30 com cabelo loiro: " << CountFem;
	std::cout << "\n Homens com mais de 18 e cabelo castanho: " << CountMa;
	return 0;
}

#include <iostream>

int main (int argc, char *argv[]){
	char Sex, Input;
	int Age, CountM, CountF, Cabelo;
	do {
		
	std::cout << "ESCOLHENDO PESSOAS\n";
	std::cout << "Insira o Sexo [M/F]: \n";
	std::cin >> Sex;
	std::cout << "Insira a idade: \n";
	std::cin >> Age;
	std::cout << "Insira a cor do cabelo: \n";
	std::cout << "[1] Castanho\n [2]Loiro \n [3]Ruivo \n[4]Preto";
	std::cin >> Cabelo;
	CountM = 0;
	CountF = 0;
	if (Sex == 'F' &&  Cabelo == 2 && Age >= 25 && Age <= 30) {
		CountF++;
	}
	else if (Sex == 'M' && Age > 18 && Cabelo == 1 ){
		CountM++;
	}

	std::cout << "Quer continuar? [S/N]\n ";
	std::cin >> Input;
	} while (Input != 'N');
	std::cout << "Total de homens com mais de 18 e cabelos castanhos: " << CountM;
	std::cout << "\n Total de mulheres entre 25 e 30 e cabelos loiro: " << CountF;	
	return 0;
}

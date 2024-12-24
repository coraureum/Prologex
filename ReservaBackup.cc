#include <iostream>
#include <array>
#include <string>

int main (int argc, char *argv[]){
	std::array<std::string, 10> Acentos = {"B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8", "B9", "B10"};
	std::string Resp;
	char Final;
	for (int i =0; i<=9; i++){
		std::cout << "["<<Acentos[i] << "]";
	}
	std::cout << '\n';
	std::cout << "Deseja reservar qual acento?: \n";
	std::cin >>  Resp;
	std::cout << "Acento " << Resp << " reservado!";
	for (int i = 0; i<=9; i++){
		if(Resp == Acentos[i]){
			Acentos[i] = "---";
		}
	}
	std::cout << '\n';
	for (int i =0; i<=9; i++){
		std::cout << "["<< Acentos[i]<< "]";
	}

	std::cout << '\n';
	std::cout << "Deseja continuar? [y/n]\n";
	std::cin >> Final;

	do {
		for (int i =0; i<=9; i++){
		std::cout << "["<<Acentos[i] << "]";
	}
	std::cout << '\n';
	std::cout << "Deseja reservar qual acento?: \n";
	std::cin >>  Resp;
	std::cout << "Acento " << Resp << " reservado!";
	for (int i = 0; i<=9; i++){
		if(Resp == Acentos[i]){
			Acentos[i] = "---";
		}
	}
	std::cout << '\n';
	for (int i =0; i<=9; i++){
		std::cout << "["<< Acentos[i]<< "]";
	}

	std::cout << '\n';
	std::cout << "Deseja continuar? [y/n]\n";
	std::cin >> Final;


	}while(Final != 'n' || Final !='N');
	return 0;
}

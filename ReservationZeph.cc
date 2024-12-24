#include <iostream>
#include <string>

int main () {
	std::string Assentos[10] = {"B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8", "B9", "B10"};
	bool Reservados[10] = {false, false, false, false, false, false, false, false, false, false};
	char Fine = 'y';

	while (Fine == 'y'){
		for (int i = 0; i <=9; i++){
			if (Reservados[i]){
				std::cout << "[---]";
			}
			else {
			std::cout << "[" << Assentos[i] << "]";
			}
		}
		std::cout << '\n';
		std::cout << "Qual assento deseja reservar?\n";
		std::string Resposta;
		std::cin>> Resposta;
		bool JaReservado = false;
		for (int i =0; i<= 9; i++){
			if (Resposta == Assentos[i]){
				if (Reservados[i] == true){
					JaReservado = true;
				}
				else {
					Reservados[i] = true;
					std::cout << "Acento reservado com sucesso!\n";
				}
			}
		}
		if (JaReservado){
			std::cerr << "Erro: Acento ja reservado!\n";
		}
		std::cout << "Deseja continuar? [y/n]: ";
		std::cin >> Fine;
	}
}

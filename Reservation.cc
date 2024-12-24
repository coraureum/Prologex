#include <iostream>
#include <string>

int main (){
	std::string Acentos[10] = {"B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8", "B9", "B10"};
	bool Reservado[10] = {false, false, false, false, false, false, false, false, false, false};
	char Fine = 'y';
	while (Fine == 'y'){
		for (int i = 0; i <=9; i++){
			if (Reservado[i]){
				std::cout << "[---]";
			}
			else{
				std::cout << "["<< Acentos[i] << "]";
			}
		}
	std::cout << '\n';
	std::string Resposta; 
	std::cout << "Escolha um assento: ";
	std::cin >> Resposta;
	bool JaReservado = false;
		for (int i =0; i<=9; i++){
			if (Resposta == Acentos[i]) {
			if (Reservado[i]){
				JaReservado = true;
			}	
			else {
				Reservado[i] = true;
				std::cout << "Acento reservado com sucesso!\n";
			}
			}
		}
	
	if (JaReservado){
		std::cerr << "Erro: Acento ja reservado!\n";
	}
	std::cout << "Deseja continuar?\n";
	std::cin >> Fine;
	}

	return 0;
}

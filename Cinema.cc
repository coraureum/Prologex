#include <iostream>
#include <string>
#include <array>
int main (){
	std::array <std::string, 10> Assentos = {"B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8", "B9", "B10"};
	std::array <bool, 10> Reservados = {false, false, false, false, false, false, false, false, false, false};
	std::string Assento;
	char Continue = 'y';
	while (Continue == 'y'){
	for (int i =0; i<=9; i++){
		if (Reservados[i]){
			std::cout << "[---]";
		}
		else {
			std::cout << "[" << Assentos[i]<< "]";
		}
	}
	std::cout << '\n';	
	std::cout << "Digite um assento para reserva: ";
	std::cin >> Assento;
	
	bool JaReservado = false;
	for (int i =0; i<=9; i++){
		if (Assento == Assentos[i]){
			if (Reservados[i]){
			JaReservado = true;
			}
		
			else 	{
			std::cout << "Assento reservado com sucesso!\n";
			Reservados[i] = true;
			}
		}
	}
	
	if (JaReservado){
		std::cerr << "Erro: Assento ja reservado!\n";
	}

	std::cout << "Deseja continuar? [y/n]\n";
	std::cin >> Continue;
}
return 0;
}

#include <iostream>
#include <string>
int main (int argc, char *argv[]){
	int Num;
	long int Fact = 1;
	std::string Resp;
	std::cout << "Digite um numero: \n";
	std::cin >> Num;
		for (int i = 1; i <= Num; i++){
		Fact *= i ;
		}
		std::cout << "O fatorial eh: " << Fact << '\n';

	std::cout << "Deseja continuar? [S/N] " << '\n';
	std::cin >> Resp;

	while (Resp == "S"){
		Fact = 1;
		std::cout << "Digite um numero: \n";
		std::cin >> Num;

		for (int i = 1; i <= Num; i++){
		Fact *= i ;
		}
		std::cout << "O fatorial eh: " << Fact << '\n';

		std::cout << "Deseja continuar? [S/N]\n";
		std::cin >> Resp;
	
	}
	return 0;
}

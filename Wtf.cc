#include <iostream>
int main (int argc, char *argv[]){
	double i, j = 0;
	char Resp, str;
	
	while (Resp != 'N'){
		std::cout << "O maior double eh: " << j << '\n';	
	
		std::cout << "Digite uma str: ";
		std::cin >> str;
		std::cout << "Digite um double: ";
		std::cin >> i;
		
		if (i > j){
		j = i;
		}
	
		std::cout << "Deseja continuar? (S/N)\n";
		std::cin >> Resp;
	}
	return 0;
}

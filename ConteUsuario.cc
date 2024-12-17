#include <iostream>

int main (int argc, char *argv[])
{
	int Counter, Total, Salto;
	std::cout << "Digite um valor: \n";
	std::cin >> Total; 
	std::cout << "Digite um valor de salto: \n";
	std::cin >> Salto;
	Counter = 0;
	while (Counter <= Total){
		std::cout << Counter << '\n';
		Counter += Salto;
	}
	return 0;
}

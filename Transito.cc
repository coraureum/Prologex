#include <iostream>

int main (int argc, char *argv[])
{
	int yr;
	std::cout << "-------------------------------------\n";
	std::cout << "Dep. de Transito\n";
	std::cout << "-------------------------------------\n";
	std::cout << "Ano de nascimento (yyyy)\n";
	std::cin >> yr;
	if (2024 - yr >= 18){
		std::cout << "Apto para dirigir\n";
	}
	else 
		std::cout << "Inapto para dirigir\n";
}

#include <iostream>

double L1, L2, L3;

int main (int argc, char *argv[]){
	std::cout << "Digite o L1: " << '\n';
	std::cin >> L1;
	std::cout << "Digite o L2: " << '\n';
	std::cin >> L2;
	std::cout << "Digite o L3: " << '\n';
	std::cin >> L3;

	if (L1 > L2 + L3 || L2 > L3 + L1 || L3 > L2 + L1){
		std::cerr << "Este triangulo nao eh valido" << '\n';
	}
	else if (L1 == L2 && L2 == L3){
		std::cout << "Este triangulo eh equilatero" << '\n';
	}
	else if (L1 == L2 || L2 == L3 || L1 == L3)
		std::cout << "Este triangulo eh isosceles" << '\n';
	else {
		std::cout << "Este triangulo eh escaleno" << '\n';
	}

}


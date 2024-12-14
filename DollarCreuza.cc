#include <iostream>

int main (int argc, char *argv[])
{
	double dollar, real;

	std::cout << "Quantos reais eu possuo?\n";
	std::cin >> real;
	dollar = real/6.04;
	std::cout << "Ah, ja sei, precisarei comprar " << dollar << " dolares!\n";

}

#include <iostream>
int main (int argc, char *argv[])
{	
	double prod, valtot;
	std::cout << "Qual o valor do produto?\n ";
	std::cin >> prod;
	valtot = prod * 1.6;
	std::cout << "O val total eh: " << valtot << '\n';
	std::cout << "O imposto eh: " << prod * 0.6 << '\n';
}

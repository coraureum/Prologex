#include <iostream>

int main (int argc, char *argv[]){
	int i = 1; 
	int convs = 0;
	std::cout << "Quantas conversoes serao feitas? \n";
	std::cin >> convs;
	while (i <= convs){
	double Real, Dollar;
	std::cout << "Quanto em real?\n";
	std::cin >> Real;
	Dollar = Real/6.15;
	std::cout << "O valor em dolar eh: " << Dollar << '\n';
	i++;
	}
	return 0;
}

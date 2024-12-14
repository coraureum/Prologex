#include <iostream>

int main (int argc, char *argv[])
{
	double celsius, fahrenheit;
	std::cout << "Qual a temperatura em F?\n";
	std::cin >> fahrenheit;
	celsius = (fahrenheit - 32)/1.8;
	std::cout << "Ah! Sao " << celsius << " em Celsius agora!\n";
}

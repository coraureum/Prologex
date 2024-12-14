#include <iostream>

int main (int argc, char *argv[])
{
	double dindin;
	std::cout << "Quanto dinheiro temos? \n ";
	std::cin >> dindin;

	if (dindin >= 10000.0){
		std::cout << "Partiu Disney!\n";
	}
	else 
		std::cout << "Ai vamos ficar em casa ne\n";
}

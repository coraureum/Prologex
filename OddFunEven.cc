#include <iostream>

void OddEven(int x){
		if (x % 2 == 1){
		std::cout << "Eh impar\n";
	}
		else{
		std::cout << "Eh par\n";
		
		}
}
int main (int argc, char *argv[])
{
	int num;
	std::cout << "Digite um numero: \n";
	std::cin >> num;
	OddEven(num);
}

#include <iostream>

void ParOuImpar(int x){
	if (x % 2 == 1){
		std::cout << "O numero " << x << " eh impar!\n";
	}
	else {
		std::cout << "O numero " << x << " eh par!\n";
	}
}
int main (int argc, char *argv[]){
	int Val;
	std::cout << "Digite um numero\n";
	std::cin >> Val;
	ParOuImpar(Val);
	return 0;
}

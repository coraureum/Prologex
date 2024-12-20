#include <iostream>

int main (int argc, char *argv[]){
	int Val;
	std::cout << "Digite um valor inteiro\n";
	std::cin >> Val;
	if (Val % 2 == 1){
		--Val;
	}
	for (int i = Val; i >= 0; i -=2){
		std::cout << i << ' ';
	}
	std::cout << '\n';
}

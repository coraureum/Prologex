#include <iostream>

int main (int argc, char *argv[]){
	int Input = 0;
	do{
	int i = 0;
	int j = 10;
	std::cout << "Menu:\n";
	std::cout << "[1]Contar de 1 ate 10\n [2]Contar de 10 ate 1\n [3]Sair\n";
	std::cin >> Input;
	switch (Input){
		case 1:
			do {
				std::cout << i << ' ';
				i++;
			}while(i <= 10);
			break;
		case 2:
			do{
				std::cout << j << ' ';
				--j;
			} while(j >= 0);
			break;
		case 3:
			break;

	}
	}while (Input !=3);
}

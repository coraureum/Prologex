#include <iostream>
#include <string>

std::string OddOrEven(int x){
	if (x % 2 == 0){
		return "PAR";
	}
	else {
		return "IMPAR";
	}
}
int main (int argc, char *argv[]){
	int Val;
	std::cout << "Digite um valor ";
	std::cin >> Val;
	std::cout << "O valor " << Val << " eh " << OddOrEven(Val);
	return 0;
}

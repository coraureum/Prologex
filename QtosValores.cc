#include <iostream>

int main (int argc, char *argv[]){
	int j = 0;
	int Sum = 0;
	for (int i = 0; i <= 5; i++){
	int Val;
	std::cout << "Digite um valor: ";
	std::cin >> Val;
	if (Val >= 0 && Val <= 10){
		j++;
		if (Val % 2 == 1){
			Sum += Val;
		}
	}

	}
	std::cout << "Num de valores entre 0 e 10: " << j << '\n';
	std::cout << "A soma dentre todos os valores impares: " << Sum << '\n';
	return 0;
}

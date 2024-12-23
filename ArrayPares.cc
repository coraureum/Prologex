#include <iostream>
#include <array>

int main (int argc, char *argv[]){
	std::array<int, 7> Array;
	int counter = 0;
	for (int i = 0; i <= 6; i++){
		std::cout << "Digite o " << (i + 1) << "o valor!\n";
		std::cin >> Array[i];
		}
	for (int i = 0; i <= 6; i++){
		if (Array[i] % 2 == 0){
			std::cout << "O valor " << Array[i] << " eh par, na posicao " << i << '\n';
		counter++;
		}
	}
	std::cout << "O total de pares digitados pares foi " << counter;

	return 0;
}

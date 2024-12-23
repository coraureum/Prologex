#include <iostream>
#include <array>

int main (int argc, char *argv[]){
	std::array <int, 10> Numeros;
	int aux;
	for (int i = 0; i <= 9; i++){
		std::cout << "Digite um valor: ";
		std::cin >> Numeros[i];
	}
	std::cout << '\n';

	for (int i = 0; i <= 8; i++){
		for (int j = i + 1; j <= 9; j++){
			if (Numeros[i] >  Numeros[j]){
				aux = Numeros[i];
				Numeros[i] = Numeros[j];
				Numeros[j] = aux;
			}
		}
	}
	for (int i  = 0; i <= 9; i++){
		std::cout << Numeros[i] << ' ';
	}
	std::cout << '\n';
	return 0;
}

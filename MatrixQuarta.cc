#include <iostream>
#include <stdlib.h>
int main (){
	int Matrix[4][4], Sum = 0, Prod = 1, Maior = 0;
	for (int i = 0; i<=3; i++){
		for (int j = 0; j<=3; j++){
			Matrix[i][j] = std::rand() % 10;
		}
	}
	for (int i = 0; i <=3; i++){
		for (int j = 0; j<=3; j++){
			if (i == j){
				Sum += Matrix[i][j];
			}
			if (i == 1){
				Prod *= Matrix[1][j];
			}
			if (j == 2){
				if (Matrix[i][j] > Maior){
					Maior = Matrix[i][j];
				}
			}
			std::cout << '\t' << Matrix[i][j];
			}
		std::cout << '\n';
	}
	std::cout << "A soma da diagonal principal eh: " << Sum << '\n';
	std::cout << "O produto dos valores da segunda linha: " << Prod << '\n';
	std::cout << "O maior valor da terceira coluna eh: " << Maior << '\n';
	return 0;
}

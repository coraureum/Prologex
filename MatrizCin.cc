#include <iostream>

int main (){
	int Matrix[3] [2];
	int i, j;
	for (i = 0; i <=2; i++){
		for (j = 0; j <=1; j++){
			std::cout << "Digite um valor para a matriz na posicao [" << (i+1) << ", " << (j+1) << "] :";
			std::cin >> Matrix [i] [j];
		}
	}
	for (i = 0; i<=2; i++){
		for (j = 0; j<=1; j++){
			std::cout <<'\t' << Matrix[i] [j];
		}
		std::cout << '\n';
	}
}

#include <iostream>
#include <stdlib.h>
int main (){
	int Matrix[3][3], totpar = 0;
	for (int i = 0; i<=2; i++){
		for (int j = 0; j<=2; j++){
			Matrix[i][j] = std::rand() % 11;
		}
	}
	for (int i = 0; i <=2; i++){
		for (int j = 0; j<=2; j++){
			if (Matrix[i][j] % 2 == 0){
				std::cout <<'\t' <<"{" << Matrix[i][j]<< "}";
				totpar++;
			}
			else {
			std::cout << '\t' << Matrix[i][j];
			}
		}
		std::cout << '\n';
	}
/*	for (int i = 0; i <=2; i++){
		for (int j = 0; j <=2; j++){
			if (Matrix[i][j]%2 == 0){
				std::cout << "O valor " << Matrix[i][j] << " eh par";
			}
			std::cout << '\n';
		}
	}
 */
	std::cout << "O total de pares eh: " << totpar;
}

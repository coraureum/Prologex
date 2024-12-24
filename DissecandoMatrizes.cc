#include <iostream>
#include <stdlib.h>
int main (){
	int Matrix[4][4], Men;
	
	for (int i = 0; i <=3; i++){
		for (int j = 0; j <=3; j++){
			std::cout << "Digite um valor na posiçao ["<< (i+1) <<", "<< (j+1) << "]\n";
			Matrix[i][j] = std::rand() % 17;
		}
	}

	while (Men != 5){
		std::cout << "MENU: \n";
		std::cout << "1: Diagonal principal\n";
		std::cout << "2: Triangulo superior\n";
		std::cout << "3: Triangulo inferior\n";
		std::cout << "4: Matriz completa\n";
		std::cout << "5: Sair\n";
		std::cin >> Men;
		system("clear");	
		switch (Men){
		
		case 1:
			for(int i =0; i<=3; i++){
				for (int j =0; j<=3; j++){
					
					if (i == j){
						std::cout << '\t';
						std::cout << Matrix[i][j];
					}
					else {
						std::cout << '\t'<<  " ";
					}
				}
				std::cout << '\n';
			}
			break;
		case 2:
			for (int i = 0; i <=3; i++){
				for (int j = 0; j <=3; j++){
					if (j>i){
						std::cout << '\t' << Matrix[i][j];
					}
					else {
						std::cout << '\t';
					}
				}
				std::cout << '\n';
			}
			break;
		case 3:
			for (int i =0; i <=3; i++){
				for (int j =0; j<=3; j++){
					if(i > j){
						std::cout << '\t' << Matrix[i][j];
					}
					else {
						std::cout << '\t';
					}
				}
				std::cout << '\n';
			}

			break;
		case 4:
			for (int i =0; i<=3; i++){
				for (int j = 0; j<=3; j++){
					std::cout << '\t' << Matrix[i][j];
				}
				std::cout << '\n';
			}
			break;
		case 5:
			return 0;
			break;
	}
	}
	return 0;
}

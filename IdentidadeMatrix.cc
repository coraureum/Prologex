#include <iostream>

int main (){
	int Matrix[3][3];

	for (int i = 0; i <=2; i++){
		for (int j = 0; j<=2; j++){
			if(i == j){
				Matrix[i][j] = 1;
			}
			else{
				Matrix[i][j] = 0;
			}
		}
	}
	for (int i = 0; i <=2; i++){
		for (int j = 0; j <=2;j++ ){
			std::cout << '\t' << Matrix[i][j];
		}
		std::cout << '\n';
	}
}


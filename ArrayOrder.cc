#include <iostream>
#include <array>

int main (int argc, char *argv[]){
	std::array <int, 4> Array = {3, 4, 2, 1};
	int aux;
		for (int i = 0; i <= 3; i++){
		std::cout << Array[i] << ' ';
	}
		std::cout << '\n';
	
		for (int i = 0; i <= 2; i++){
			for(int j = i + 1; j <= 4; j++){
				if(Array[i] > Array[j]){
				aux = Array[i];
				Array[i] = Array[j];
				Array[j] = aux;
				}
			}
		}
		for (int i = 0; i <=3; i++){
			std::cout << Array[i] << ' ';
		}
	return 0;
}

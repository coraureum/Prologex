#include <iostream>
#include <array>
#include <string>
#include <cstdlib>

int main (int argc, char *argv[]){
	std::array<std::string, 3> Times;
	std::cout << "CAMPEONATO FUTEBOL: \n";

	for (int i = 0; i <= 2; i++){
		std::cout <<"Entre um time: \n";
		std::cin >> Times[i];
	}

	for (int i = 0; i <=2; i++ ){
		for (int j = i + 1; j <= 2; j++){
			std::cout << Times[i] << " x " << Times[j];  
			std::cout << '\n';
			std::cout << Times[j] << " x " << Times[i];
			std::cout << '\n';
		}
	}


	
	return 0;
}

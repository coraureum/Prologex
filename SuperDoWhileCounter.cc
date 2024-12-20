#include <iostream>

int main (int argc, char *argv[]){
	int Men;
	std::cout << "======================\n";
	std::cout << "|     M  E  N U      |\n";
	std::cout << "======================\n";
	std::cout << "|[1] De 1 a 10       |\n";
	std::cout << "|[2] De 10 a 1       |\n";
	std::cout << "|[3] Sair            |\n";
	std::cout << "======================\n";
	std::cin >> Men;
	do{
	switch (Men){
		case 1:
			for (int i = 1; i <= 10; i++){
				std::cout << i << ' ';
			}
		break;
		case 2:
	for (int i = 10; i >= 1; --i){
		std::cout << i  << ' ';
	}
		break;
		case 3:
		break;
		}
	std::cout << '\n';
	std::cout << "======================\n";
	std::cout << "|     M  E  N U      |\n";
	std::cout << "======================\n";
	std::cout << "|[1] De 1 a 10       |\n";
	std::cout << "|[2] De 10 a 1       |\n";
	std::cout << "|[3] Sair            |\n";
	std::cout << "======================\n";
	std::cin >> Men;

	} while (Men != 3);
	return 0;
}

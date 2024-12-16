#include <iostream>

int main (int argc, char *argv[]){
	int n1, n2, Med;
	std::cout << "Digite a nota 1: \n";
	std::cin >> n1;
	std::cout << "Digite a nota 2: \n";
	std::cin >> n2;
	Med = (n1 + n2)/2;

	switch (Med){
		case 10: case 9:
			std::cout << "Aproveitamento: A\n";
			break;
		case 8: case 7:
			std::cout << "Aproveitamento: B\n";
			break;
		case 6: case 5:
			std::cout << "Aproveitamento: C\n";
			break;
		case 4: case 3: case 2: case 1:
			std::cout << "Aproveitamento: F\n";
			break;
	}
	std::cout << "Media: " << Med << '\n';
	return 0;
}

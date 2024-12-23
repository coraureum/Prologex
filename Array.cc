#include <iostream>
#include <array>
int main (int argc, char *argv[]){
	int input;
	std::array <int, 3> hello;
	for (int i = 0; i <= 2; i++)
	{
		std::cout << "Digite o " << (i + 1) << "o valor\n";
		std::cin >> hello[i];
	}

	for (int i = 0; i <= 2; i++){
		std::cout << "{"<< hello[i] << "}" << ' ';
	}
	return 0;
}

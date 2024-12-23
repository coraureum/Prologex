#include <iostream>
#include <array>
#include <string>
int main (int argc, char *argv[]){
	char name[30];
	int counter = 0;

	std::array <std::string, 4> Array;
	for (int i = 0; i <= 3; i++){
			std::cout << "Digite seu nome: ";
			std::cin >> name;

				if (name[0] == 'C' || name[0] == 'c')
				{
				counter++;
				Array[counter] = name;
				}
	}
	system("clear");
	std::cout << "No final, temos " << counter << " pessoas começando com a letra C\n";
	return 0;
}

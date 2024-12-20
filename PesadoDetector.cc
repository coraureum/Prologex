#include <iostream>
#include <string>
int main (int argc, char *argv[]){
	double i, j = 0, c = 0;
	std::string name, str;
	while (c <=5){
	std::cout << "O mais pesado eh: " << name << " com " << j << "kgs\n";	
	
	std::cout << "Digite um nome \n";
	std::cin >> str;
	std::cout << "Digite um peso: \n";
	std::cin >> i;
		if (i > j){
		j = i;
		name = str;
	}
	system("clear");
	c++;
	}
	std::cout << "O mais pesado foi " << name << " com " << j << " kgs\n";
	return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
int main (int argc, char *argv[]){
	std::string Name;
	std::cout << "Digite seu nome: ";
	std::cin >> Name;
	std::cout << "Total de letras: " << Name.length();
	std::cout << "\nSeu nome em maiusculas e: ";
	std::string str = Name;	
	std::transform(str.begin(), str.end(), str.begin(), ::toupper);
	std::cout << str << '\n';
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	str = Name;
	std::cout << "\nSeu nome em minusculas e: " << str << '\n';
	std::cout << "\nA primeia letra do nome e: " << Name.at(0) << '\n';
	std::cout << "\nE a ultima e: " << Name.at(Name.length() - 1) << '\n';
	std::cout << "\nA letra 'o' ocorre na posicao " << Name.find('o') + 1;
	std::cout << "\n O valor ascii da letra 'o' eh " << int('o') << '\n';
	std::cout << "A letra de caractere 111 eh " << char(111) << '\n'; 
	std::reverse(str.begin(), str.end());
	std::cout << "\n O nome ao contrario eh: " << str;
	return 0;
}

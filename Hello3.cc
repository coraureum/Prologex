#include <iostream>
#include <string>
std::string name;
int main (int argc, char *argv[])
{
	std::cout << "Digite seu nome" << '\n';
	std::cin >> name;
	std::cout << "Ola, " << name << ", seja bem vindo!" << '\n';
}

#include <iostream>
#include <string>
int main (int argc, char *argv[]){
	std::string Name, Msg;
	Msg = "O novo salario eh: ";
	int Dependants;
	double Salary;

	std::cout << "Qual o nome do funcionario? \n";
	std::cin >> Name;
	std::cout << "Qual o salario do funcionario? \n";
	std::cin >> Salary;
	std::cout << "Quantos dependentes possui o funcionario?\n";
	std::cin >> Dependants;

	switch (Dependants) {
case 0:
	std::cout << Msg << 1.05*Salary << '\n';
break;

case 1: case 2: case 3:
std::cout << Msg << 1.1*Salary << '\n';

break;
case 4: case 5: case 6:
std::cout << Msg << 1.2*Salary << '\n';
break;
break;
default:
std::cout << Msg << 1.5*Salary << '\n';
break;
	}

	return 0;
}

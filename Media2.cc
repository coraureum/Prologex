#include <iostream>

int main (int argc, char *argv[])
{
	double n1, n2, m;
	
	std::cout << "Digite a nota 1: \n";
	std::cin >> n1;
	std::cout << "Digite a nota 2: \n";
	std::cin >> n2;
	m = (n1+n2)/2;

	std::cout << "A media eh: " << m << "\n";
	if (m < 5){
		std::cout << "O aluno esta reprovado\n";
	}
	else if (m >=5 && m < 7){
		std::cout << "O aluno esta de recuperacao\n";
	}
	else 
		std::cout << "O aluno esta aprovado!\n";
}

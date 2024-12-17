#include <iostream>
#include <string>
int main (int argc, char *argv[]){
	double nota, maior;
	std::string nomem, nome;
	int qtde;
	int i = 1;
	std::cout << "-------------------------------\n";
	std::cout << "\nEscola Santa Paciencia";
	std::cout << "\n-------------------------------\n";
	std::cout << "Quantos alunos tem?\n";
	std::cin >> qtde;
	while (i < qtde){
	std::cout << "-------------\n";
	std::cout << "ALUNO " << i << '\n';
	std::cout << "Nome do aluno: ";
	std::cin >> nome;
	std::cout << "\nNota de " << nome << ": ";
	std::cin >> nota;
	std::cout << "\n-------------\n";
		if (nota > maior){
			nomem = nome;
			maior = nota;
		}
		i++;
	}
	std::cout << "\nO maior aproveitamento foi de " << nomem << " de nota " << maior << "\n";
	return 0;
}

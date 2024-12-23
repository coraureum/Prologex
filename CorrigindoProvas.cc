#include <iostream>
#include <array>
#include <string>
int main (int argc, char *argv[]){
	std::array<std::string, 5> Gabarito;
	std::array<std::string, 5> GabaritoAluno;
	std::array<std::string, 3> NomeAluno;
	std::array<double, 3> NotaAluno = {0.0, 0.0, 0.0};
	double Media;

	for (int i = 0; i <= 4; i++){
		std::cout << "Digite a resposta para a questao " << (i +1) << ": ";
		std::cin >> Gabarito[i];
	}

	for (int i = 0; i <= 2; i++){
		std::cout << "Digite o nome do aluno: ";
		std::cin >> NomeAluno[i];
			for (int j = 0; j <=4; j++){
				std::cout << "Digite alternativa " << (j + 1) << " marcada: ";
				std::cin >> GabaritoAluno[j];
				if (GabaritoAluno[j] == Gabarito[j]){
					NotaAluno[i] += 2;
				}
			}
	}
	std::cout << "NOTAS FINAIS: \n";
	for (int i = 0; i <= 2; i++){
		
		std::cout << NomeAluno[i] << ": " << NotaAluno[i] << '\n';
		Media += NotaAluno[i];
	}
	Media /=3.0;
	std::cout << "Media da turma: " << Media;
	return 0;
}

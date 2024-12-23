#include <iostream>
#include <array>
#include <string>

int main (int argc, char *argv[]){
	std::array <std::string, 5> Aluno;
	std::array <double, 5> Nota1;
	std::array <double, 5> Nota2;
	std::array <double, 5> Media;
	double Sum, Avg;
	int counter = 0;
	for (int i = 0; i <= 4; i++){
		std::cout << "Digite o nome do aluno: ";
		std::cin >> Aluno[i];
		std::cout << "Digite a Nota 1 do aluno " << Aluno[i] <<": " ;
		std::cin >> Nota1[i];
		std::cout << "Digite a Nota 2 do aluno " << Aluno [i] << ": ";
		std::cin >> Nota2[i];
		Media[i] = (Nota1[i] + Nota2[i])/2;
		Sum += Media[i];
		Avg = Sum/5;
	}


	for (int i = 0; i <= 4; i++){
		std::cout << "A media do aluno " << Aluno[i] << " foi " << Media[i] << '\n'; 
	
	if (Media[i] > Avg){
		counter++;	
	}
	}
	std::cout << "Ao todo, tivemos " << counter << " alunos acima da media da turma, que eh " << Avg << '\n';
	return 0;
}

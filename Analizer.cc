#include <iostream>

int main (int argc, char *argv[]){
	int Med, i = 1, Null = 0, cd = 0, SumP = 0, Val = 0;
	while (i <=5){
	std::cout << "Insira o " << i <<  "o valor\n";
	std::cin >> Val;
	if (Val % 5 == 0 && Val != 0){
		cd++;
	}
	if (Val == 0){
		Null++;
	}
	if (Val % 2 == 0){
		SumP += Val;
	}
	Med += Val;
	i++;
	}
	Med /= 5;

	std::cout << "Soma: " << Med * 5 << '\n';
	std::cout << "Media: " << Med << '\n';
	std::cout << "Divisiveis por 5: " << cd << '\n';
	std::cout << "Nulos: " << Null << '\n';
	std::cout << "Soma dos pares: " << SumP << '\n';
	return 0;
}

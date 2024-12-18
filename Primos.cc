#include <iostream>

int main (int argc, char *argv[]){
	int Num;
	int Div = 0;
	std::cout << "Entre um numero: \n";
	std::cin >> Num;
	for (int i = 0; i <= Num; i++){
		//std::cout << i << "\n";
		if (i != 0 && Num % i == 0){
			Div++;
		}
	}
	if (Div > 2){
		std::cout << "O valor " << Num << " nao eh primo\n";
	}
	else {
		std::cout << "O valor " << Num << " eh primo\n";
	}
	return 0;
}

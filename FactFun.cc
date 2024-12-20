#include <iostream>

int Fact(int x){
	int Facto = 1;
	for (int i = 1; i <= x; i++){
		Facto *= i;
	}

	return Facto;
}
int main (int argc, char *argv[]){
	int Num;
	std::cout << "Digite um numero: ";
	std::cin >> Num;
	std::cout << Fact(Num);
	return 0;
}

#include <iostream>

void FuncaoSoma(int x, int y){
	std::cout << "Recebi o valor " << x << '\n';
	std::cout << "Recebi o valor " << y << '\n';
	std::cout << "A soma eh " << x + y << '\n';
}
int main (int argc, char *argv[]){
	FuncaoSoma(1, 1);
	std::cout << '\n';
	return 0;
}

#include <iostream>

void Soma (int &x, int &y){
	x += 1;
	y += 2;
	std::cout << "Valor de A " << x << '\n';
	std::cout << "Valor de B " << y << '\n';
	std::cout << x + y << '\n';
}	
int main (int argc, char *argv[]){
	int N1 = 30, N2 = 50;
	
	Soma(N1, N2);
	std::cout << '\n';

	return 0;
}

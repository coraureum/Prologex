#include <iostream>


void Procedure (int x, int y){
	int sum = x + y;
	std::cout << sum << '\n';
}
int main (int argc, char *argv[]){
	Procedure(5, 2);
	return 0;
}

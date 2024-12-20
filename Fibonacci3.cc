#include <iostream>

void Fibo(int &x, int &y){
	int curr = x + y;
	std::cout << curr << ' ';
	x = y;
	y = curr;
}
int main (int argc, char *argv[]){
	int n1 = 0, n2 = 1;
	std::cout << n1 << ' ';
	std::cout << n2 << ' ';
	for (int i = 0; i <= 20; i++){
		Fibo(n1, n2);
	}
	std::cout << "\n";
	return 0;
}

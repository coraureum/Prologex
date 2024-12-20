#include <iostream>

void Fibo(int &x, int &y){
	int curr;
	curr = x + y;
	x = y;
	y = curr;
	std::cout << curr << '\n';
} 
int main (int argc, char *argv[]){
	int n = 0, m = 1;
	for (int i = 0; i <= 5; i++){
		Fibo (n, m);
	}
	return 0;
}

#include <iostream>

int main (int argc, char *argv[]){
	int n1 = 0, n2 = 1, n, i = 0;
	if (i == 1){
		return n1;
	}
	else if (i == 2){
		return n2;
	}

	for (i = 2; i <= 15; i++){
		n = n1 + n2;
		std::cout << n << ' ';
		n1 = n2;
		n2 = n;
	}
	return 0;
}

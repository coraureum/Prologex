#include <iostream>

int main (int argc, char *argv[]){
	int i = 0;
	int sum = 0;
	int st = 0;
	int mn;
	while (i <= 10){
		int l;
		std::cout << "Digite um numero: " << '\n';
		std::cin >> l;
		if (l > st){
			st = l;
		}
		else if (l < mn) {
			mn = l;
		}
		sum += l;
		i++;
	}
	std::cout << "A soma eh: \n" << sum;
	std::cout << "\nO maior valor eh: \n" << st;
	std::cout << "\n O menor valor eh: \n" << mn;
	return 0;
}

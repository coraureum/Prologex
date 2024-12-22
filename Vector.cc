#include <iostream>
#include <vector>

int main (int argc, char *argv[]){
	std::vector <int> hello(4);
	int input;
	for (int i = 0; i <= 4; i++)
	{
		std::cin >> input;
		hello.capacity(input);
	}

	for (int i = 0; i <= 4; i++){
		std::cout << hello[i] ;
	}
	return 0;
}

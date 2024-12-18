#include <iostream>

int main (int argc, char *argv[]){
	
	for (int i = 0; i <= 10; i++){
		for (int c = 0; c <= 10; c++){
		std::cout << c << " x " << i << " = " << c * i << '\n';
			}
	}
	return 0;
}

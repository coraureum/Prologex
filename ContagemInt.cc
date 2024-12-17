#include <iostream>

int main (int argc, char *argv[]){
	int ent, fim;
	int i = 0;
	std::cout << "-------------------------\n";
	std::cout << "Contagem inteligente\n";
	std::cout << "-------------------------\n";
	std::cout << "Inicio\n";
	std::cin >> ent;
	std::cout << "Fim\n";
	std::cin >> fim;
	std::cout << "Contando... \n";
		if (fim<ent){
		while (i < ent){
			std::cout << i << '\n';
			i++;
		}
		} else {
			while (fim > i){
				std::cout << fim << '\n';
				--fim;
			}
		}


}

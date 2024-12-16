#include <iostream>

int main (int argc, char *argv[]){
	int val, donatus;
	std::cout << "--------------------------------\n";
	std::cout << "CRIANÇA ESPERANÇA\n";
	std::cout << "--------------------------------\n";
	std::cout << "Muito obrigado por ajudar!\n";
	std::cout << "[1] para doar R$10,00\n";
	std::cout << "[2] para doar R$20,00\n";
	std::cout << "[3] para doar R$50,00\n";
	std::cout << "[4] para doar outros valores\n";
	std::cout << "[5] para cancelar\n";
	std::cin >> donatus;
	switch (donatus){
case 1: 	
      val = 10;
	std::cout << "Voce doou R$"<< val <<",00 \n";
      break;
case 2: 
      val = 20;
      std::cout << "Voce doou R$"<< val << ",00 \n";
      break;
case 3: 
      val = 50;
      std::cout << "Voce doou R$" << val <<",00\n";
	break;
case 4:
	std::cout << "Digite quanto quer doar em R$: \n";
	std::cin >> val;
	std::cout << "Voce doou R$" << val << ",00! \n";
	break;
case 5: 
	std::cout << "Obrigado por discar de qualquer modo!\n";
	break;
	}
	return 0;
}

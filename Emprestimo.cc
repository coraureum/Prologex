#include <iostream>
int main (int argc, char *argv[])
{
	double emprestimo, parcela;
	std::cout << "Quanto sera de emprestimo? ";
	std::cin >> emprestimo;
	emprestimo *= 1.2;
	std::cout << "Quantas parcelas? ";
	std::cin >> parcela;
	std::cout << "Serao pagas " << parcela << " parcelas de " << emprestimo/parcela << '\n';
	std::cout << "O total sera " << emprestimo << '\n';
}

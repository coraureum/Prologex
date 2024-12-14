#include <iostream>

int main(int argc, char *argv[])
{	
	struct rectangle{
	double height, width;
	rectangle(double h, double w);
	};
	double height1, width2;
	rectangle newrectangle(double hei, double wei);
	std::cout << "Insira a altura do retangulo: " << '\n';
	std::cin >> height1;
	newrectangle.hei = height1;
	std::cout << "Insira a largura do retangulo: " << '\n';
	std::cin >> width2;
	newrectangle.wei = width2;
}

#include <iostream>
#include <cmath>
#define PI  3.1415928535
double Rad (double ang){
	return ang * (PI/180);

}

int main (int argc, char *argv[]){
	double ang;
	std::cout << "Digite um angulo: " << '\n';
	std::cin >> ang;
	std::cout << "O seno do angulo e: " << sin(Rad(ang)) << '\n';
}


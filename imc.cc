#include <iostream>
int main (int argc, char *argv[])
{
	double bmi, weight, height;
	std::cout << "Qual o seu peso: " << '\n';
	std::cin >> weight;
	std::cout << "Qual sua altura: \n";
	std::cin >> height;
	bmi = weight/(height * height);
	std::cout << "O seu IMC eh: " << bmi <<'\n';
	
	if (bmi > 18 && bmi < 25){
		std::cout << "Seu IMC esta ideal!\n";
	}
	else if (bmi < 18)
	{
		std::cout << "Vc esta subnutrido!\n";
	}
	else 
		std::cout << "Vc esta obeso!";
}

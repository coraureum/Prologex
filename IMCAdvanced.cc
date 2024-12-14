#include <iostream>

int main (int argc, char *argv[])
{
	double bmi, height, weight;
	std::cout << "Digite sua massa (em kg)\n";
	std::cin >> weight;
	std::cout << "Digite sua altura (em metros)\n";
	std::cin >> height;
	bmi = weight/(height * height);

	if (bmi >= 18.5 && bmi <= 25){
		std::cout << "Peso ideal\n";
	}
	else if (bmi < 16){
		std::cout << "Magreza severa\n";
	}
	else if (bmi >= 16 && bmi <=17){
		std::cout << "Magreza moderada\n";
	}
	else if (bmi >=17 && bmi < 18.5){
		std::cout << "Ligeiramente magro\n";
	}
	else if (bmi >= 25 && bmi <= 30)
	{
		std::cout << "Acima do peso\n";
	}
	else if (bmi >= 30 && bmi <= 35)
	{
		std::cout << "Obeso classe I\n";
	}
	else if (bmi >= 35 && bmi <= 40)
	{
		std::cout << "Obeso classe II\n";
	}
	else if (bmi > 40)
	{
		std::cout << "Obeso classe III\n";
	}
	else
		std::cerr << "Insira um peso ou altura validos\n";
	std::cout << "O seu BMI eh: " << bmi << '\n';
}

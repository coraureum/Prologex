#include <iostream>

int main (int argc, char *argv[]){
	double n1, n2, Med;
	std::cout << "------------------------\n";
	std::cout << "	ESCOLA JAVALI CANSADO\n";
	std::cout << "------------------------\n";
	std::cout << "Primeira nota: \n";
	std::cin >> n1;
	std::cout << "Segunda Nota: \n";
	std::cin >> n2;
	Med = (n1 + n2)/2;
	
	if (Med <= 10 && Med >= 9)
	{
		std::cout << "Media: " << Med << '\n';
		std::cout << "Aproveitamento: A\n";
	}
	else if (Med <9 && Med >= 8 )
	{
		std::cout << "Media: " << Med << '\n';
		std::cout << "Aproveitamento: B\n";
	}
	else if ( Med >= 7 && Med < 8 )
	{
		std::cout << "Media: " << Med << '\n';
		std::cout << "Aproveitamento: C\n";
	}
	else if (Med >= 6 && Med < 7){
		std::cout << "Media: " << Med << '\n';
		std::cout << "Aproveitamento: D\n";
	}
	else if (Med >= 5 && Med < 6)
	{
		std::cout << "Media: " << Med << '\n';
		std::cout << "Aproveitamento: E\n";
	}
	else{ 
		std::cout << "Media: " << Med << '\n';
		std::cout << "Aproveitamento: F\n";
	}
	return 0;
}

#include <iostream>
#include <string>
int main (int argc, char *argv[])
{
	std::string ait = "Creuza diz: ";
	int dob, yr;
	std::cout << ait << "Quando foi que eu nasci?\n";
	std::cin >> dob;
	std::cout << ait << "Em que ano estamos? \n";
	std::cin >> yr;
	std::cout << ait << "Ah! Entao eu tenho " << yr - dob << " anos!" << '\n';
	return 0;

}

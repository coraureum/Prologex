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
	if (yr - dob >= 18){
		std::cout << "E em " << yr << " voce ja tera atingido a maioridade!\n";
	}
	else 
		std::cout << "Nem pode beber rapaiz\n";
	return 0;

}

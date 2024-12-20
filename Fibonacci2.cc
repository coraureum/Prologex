#include <iostream>

int main (int argc, char *argv[]){
	int Num1 = 0, Num2 = 1, i = 0, NumCur;
	if(i <=2 ){
	std::cout << Num1 << ' ';
	std::cout << Num2 << ' ';
	i++;
	}
	for (i = 0; i <= 15; i++){
		NumCur = Num1 + Num2;
		std::cout <<  NumCur << ' ';
		Num1 = Num2;
		Num2 = NumCur;
			
	}
	return 0;
}

#include <iostream>

void Incr(int &x){
	x++;
}
int main (int argc, char *argv[])
{
	int i = 0;
	while (i <= 10) {
		std::cout << i << '\n';
		Incr(i);
	}
	return 0;
}

#include <iostream>

int main (int argc, char *argv[])
{
	int i = 0;
	while (i <= 1000) {
		std::cout << i << '\n';
		i += 10;
	}
	return 0;
}

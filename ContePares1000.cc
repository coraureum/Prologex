#include <iostream>

int main (int argc, char *argv[])
{
	int i = 1000;
	while (i >= 0) {
		std::cout << i << '\n';
		i -= 2;
	}
	return 0;
}

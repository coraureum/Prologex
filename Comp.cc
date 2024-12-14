#include <iostream>

int main (int argc, char *argv[])
{
	int a, b, c, d;
	a = 10;
	b = 22;
	c = 3;
	d = 100;
	std::cout << (a < b%2 || c > d) << '\n';
}

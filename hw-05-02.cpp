
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main()
{
	long double a, b, d, e, summ, x,y, si;
	int i;
	a = 0;
	b = 1;
	d = 0.05;
	e = 0.001;
	std::cout << "  x |  s(x) | f(x)" << "\n";
	while (a < b + d/2) {

		x = a;
		if (std::abs(x) < d/2)
			x = 0;
		a += d;
		summ = 0;
		si = 1;
		i = 0;


		while (i%4==0 || std::abs(si * sin(i * (M_PI / 4))) >= e) {
			i++;
			si *= x;
			summ += si * sin(i * (M_PI / 4));
		}
		y = (x * sin(M_PI / 4)) /(1 - 2 * x * cos(M_PI / 4) );
		printf("%.2f", x);
		std::cout << "|";
		printf("%.4f", summ);
		std::cout << "|";
		printf("%.4 f", y);
		std::cout << "\n";
	}
	return 0;
}


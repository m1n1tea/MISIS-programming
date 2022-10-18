#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main()
{
	long double a, b, d, e, summ, x, si;
	int i;
	a = 0;
	b = 1;
	d = 0.1;
	e = 0.0001;
	std::cout << " x | s(x) | f(x)" << "\n";
	while (a <= b) {


		x = a;
		if (std::abs(x) < 0.001)
			x = 0;
		a += d;
		summ = 0;
		si = e + 1;
		i = 0;


		while (std::abs(si) >= e) {

			if (i == 0) {
				si = 1;
				summ += si;
				i++;
				continue;
			}
			si *= 2*x;
			si /= i;
			summ += si;
			i++;
		}
		printf("%.1f", x);
		std::cout << "|";
		printf("%.4f", summ);
		std::cout << "|";
		printf("%.4f", pow(M_E,2*x));
		std::cout << "\n";
	}
	return 0;
}


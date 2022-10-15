
#include <iostream>
#include <cmath>

int main()
{
	long double a, b, d, e,summ,x,si;
	int i;
	a = -1;
	b = 1;
	d = 0.1;
	e = 0.001;
	std::cout << "  x |  s(x) | f(x)" << "\n";
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

			si *= -1;
			si *= (x * x);
			si /= (2 * i * (2 * i - 1));
			summ += si;
			i++;
		}
		printf("%+.1f", x);
		std::cout << "|";
		printf("%.4f", summ);
		std::cout << "|";
		printf("%.4f", std::cos(x));
		std::cout << "\n";
	}
	return 0;
}


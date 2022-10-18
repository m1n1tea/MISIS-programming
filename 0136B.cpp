// 0136B.cpp: определяет точку входа для приложения.
//

#include <iostream>

int main()
{
	int a1;

	int a2 = 0;
	int b;
	int k = 1;

	std::cin >> a1 >> b;

	while (a1 || b) {
		a2 += (3 + b%3 - a1%3) % 3 * k;

		k *= 3;
		a1 /= 3;
		b /= 3;
	}
	std::cout << a2;


	return 0;
}

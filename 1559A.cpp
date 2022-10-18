// 1559A.cpp: определяет точку входа для приложения.
//

#include <iostream>

int main()
{
	int n, t;
	int x, x1;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		x1 = -1;
		std::cin >> n;
		for (int j = 0; j < n; j++) {
			std::cin >> x;
			if (x1 == -1)
				x1 = x;
			x1 = x1 & x;
		}
		std::cout << x1 << " \n";
	}

	return 0;
}

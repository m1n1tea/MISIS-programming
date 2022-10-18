

#include <iostream>
#include <vector>


int main()
{
	int n, t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> n;
		for (int j = 1; j <=n; j++) {
			if (j > 1)
				std::cout << 1 << " ";

			for (int q = 0; q < j - 2; q++)
				std::cout << 0 << " ";

			std::cout << 1 << "\n";
		}

	}

	return 0;
}

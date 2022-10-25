#include <iostream>

int main()
{
	int n, m,t;
	int i4, j4;
	std::cin >> t;
	for (int x = 0; x < t; x++) {
		std::cin >> n >> m;
		
		for (int i = 0; i < n; i++) {
			i4 = i % 4;
			for (int j = 0; j < m; j++) {
				j4 = j % 4;
				if (((i4 == 0 || i4 == 3) && (j4 == 0 || j4 == 3)) || ((i4 == 1 || i4 == 2) && (j4 == 1 || j4 == 2)))
					std::cout << 1 << " ";
				else
					std::cout << 0 << " ";
			}
			std::cout << "\n";
		}
	}
	
	return 0;
}

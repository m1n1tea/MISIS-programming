

#include <iostream>


int main()
{
	int t;
	int n;
	bool b;
	int h;
	int row;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		h = 1;
		std::cin >> n;
		std::cin >> b;
		if (b) {
			row = 1;
			h++;
		}
		else
			row = 0;


		for (int j = 1; j < n; j++) {
			std::cin >> b;

			if (h == -1)
				continue;

			if (b)
				row++;
			else
				if (row)
					row = 0;
				else {
					h = -1;
				}
			if (row > 1)
				h += 5;
			if (row == 1)
				h++;
		}

		std::cout << h << "\n";

	}
	
	return 0;
}


#include <iostream>


int main()
{
	int t;
	int x1, x2;
	int y1, y2;
	int ans;
	std::cin >> t;


	for (int i = 0; i < t; i++) {
		std::cin >> x1 >> x2;
		std::cin >> y1 >> y2;
		if (x1 * x2 * y2 * y1)
			ans = 2;
		else if (x1 + x2 + y2 + y1)
			ans = 1;
		else
			ans = 0;

		std::cout << ans << "\n";


	}



	return 0;
}

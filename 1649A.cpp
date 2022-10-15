
#include <iostream>
#include <array>


int main()
{
	int t, n;
	int ans;
	std::cin >> t;
	std::array<bool, 100> lvl;


	for (int i = 0; i < t; i++) {
		std::cin >> n;
		ans = n-1;
		for (int j = 0; j < n; j++)
			std::cin >> lvl[j];
		for (int j = 1; j < n; j++) {
			if (ans == 0 || lvl[j] == 0)
				break;
			ans--;
		}
		for (int j = n-2; j >=0; j--) {
			if (ans == 0 || lvl[j]==0)
				break;
			ans--;
		}
		std::cout << ans << "\n";


	}



	return 0;
}

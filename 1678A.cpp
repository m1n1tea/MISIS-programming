
#include <iostream>
#include <array>


int main()
{
	int t, n;
	int x;
	int ans;
	std::cin >> t;


	for (int i = 0; i < t; i++) {
		std::cin >> n;
		std::array<int, 101> a{ 0 };
		ans = n + 1;

		for (int j = 0; j < n; j++) {
			std::cin >> x;
			a[x]++;
			if (a[x] > 1)
				ans = n;
		}

		if (a[0])
			ans = n - a[0];

		std::cout << ans << "\n";


	}



	return 0;
}

#include <iostream>

int main()
{
	int t;
	long long n;
	int cnt = 0;
	std::cin >> t;

	for (int i = 1; i <= t; i++) {
		std::cin >> n;

		if (n % 2050 != 0) {
			std::cout << -1 << "\n";
			continue;
		}

		cnt = 0;
		n /= 2050;
		while (n) {
			cnt += n % 10;
			n /= 10;
		}

		std::cout << cnt << "\n";
	}

}


#include <iostream>
#include <string>

int main()
{
	int t, n;
	int cnt = 0;
	std::string s;
	std::cin >> t;

	for (int i = 1; i <= t; i++) {
		std::cin >> n;
		std::cin >> s;
		cnt = n;
		for (char j : "QWERTYUIOPASDFGHJKLZXCVBNM")
			for (char k : s)
				if (j == k) {
					cnt++;
					break;
				}

		std::cout << cnt << "\n";
	}

}


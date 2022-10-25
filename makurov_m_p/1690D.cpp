#include <iostream>
#include <string>

int main()
{
	int t, n, k;
	int cnt,cntmax;
	std::string s;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n >> k;
		std::cin >> s;
		cnt = 0;
		for (int j = 0; j < k; j++)
			if (s[j] == 'B')
				cnt++;
		cntmax = cnt;
		for (int j = k; j < n; j++) {
			if (s[j] == 'B')
				cnt++;
			if (s[j - k] == 'B')
				cnt--;
			if (cntmax < cnt)
				cntmax = cnt;
		}
		std::cout << k - cntmax << "\n";

	}



	return 0;
}

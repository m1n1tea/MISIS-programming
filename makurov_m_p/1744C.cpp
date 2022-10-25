#include <iostream>
#include <string>

int main()
{
	int t, n;
	char ch;
	int cnt, cntmax,i1;
	std::string s;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n >> ch;
		std::cin >> s;
		if (ch == 'g') {
			std::cout << 0 << "\n";
			continue;
		}
		s += s;
		cntmax = 1;
		for (int i = 0; i < n; i++) {
			if (s[i] == ch) {
				i1 = i;
				cnt = 0;
				while (s[i1] != 'g') {
					cnt++;
					s[i1] = '-';
					i1++;
				}
				if (cnt > cntmax)
					cntmax = cnt;
			}
		}
		std::cout << cntmax << "\n";

	}



	return 0;
}

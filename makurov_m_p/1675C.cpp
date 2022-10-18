// 1675C.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include <string>


int main()
{
	int t;
	int x1, x0;
	int ans;
	std::string s;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> s;

		if (s[0] == '0') {
			std::cout << 1 << "\n";
			continue;
		}

		if (s[s.size()-1] == '1') {
			std::cout << 1 << "\n";
			continue;
		}

		x1 = s.rfind('1');
		x0 = s.find('0');

		if (x1 == -1 && x0 == -1)
			ans = s.size();
		else if (x0 == -1)
			ans = s.size() - x1;
		else if (x1 == -1)
			ans = x0+1;
		else
			ans = x0 - x1 + 1;
		std::cout << ans << "\n";
	}


	return 0;
}

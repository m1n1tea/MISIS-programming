// 1669D.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include <string>

int main()
{
	int t,n,ren;
	bool check;
	std::string s, res;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n;
		std::cin >> s;
		res = s[0];
		ren = 1;
		for (int j = 1; j < n; j++) {
			if (s[j] == s[j - 1])
				continue;
			res += s[j];
			ren++;
		}
		if (ren == 1 && res[0] == 'W') {
			std::cout << "YES" << "\n";
			continue;
		}

		if (ren == 1 && res[0] != 'W') {
			std::cout << "NO" << "\n";
			continue;
		}

		if (res[1] == 'W' && res[0] != res[1]) {
			std::cout << "NO" << "\n";
			continue;
		}

		if (res[ren-2] == 'W' && res[ren-1] != res[ren-2]) {
			std::cout << "NO" << "\n";
			continue;
		}
		check = 1;
		for (int j = 1; j < ren - 1; j++) {
			if (res[j] == 'W')
				continue;
			if (res[j - 1] == 'W' && res[j + 1] == 'W') {
				check = 0;
				break;
			}
		}
		if (check)
			std::cout << "YES" << "\n";
		else
			std::cout << "NO" << "\n";
		
	}



	return 0;
}

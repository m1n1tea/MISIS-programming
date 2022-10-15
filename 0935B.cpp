// 0935B.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include <string>


int main()
{
	int n;
	std::string s;
	int x = 0;
	int y = 0;
	int ans = 0;
	int b = -1;
	std::cin >> n;
	std::cin >> s;
	for(char& m : s) {

		if (m == 'U')
			x++;
		if (m == 'R')
			y++;

		if (x > y) {
			if (b == 0)
				ans ++;
			b = 1;
		}

		if (x < y) {
			if (b == 1)
				ans ++;
			b = 0;
		}
	}
	std::cout << ans;
	
	return 0;
}

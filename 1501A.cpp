
#include <iostream>
#include <array>


int main()
{
	int t,n;
	int time;
	int x;
	int breal;
	std::cin >> t;
	std::array <int,101> a;
	std::array <int, 101> b;
	std::array <int,101> tm;
	a[0] = 0;
	b[0] = 0;
	for (int i = 0; i < t; i++) {
		time = 0;
		breal = 0;
		std::cin >> n;
		for (int j= 1; j <= n; j++)
			std::cin >> a[j] >> b[j];
		for (int j = 1; j <= n; j++)
			std::cin >> tm[j];

		for (int j = 1; j <= n; j++) {
			time= a[j] - b[j - 1] + tm[j]+breal;
			x = (b[j] - a[j] - 1) / 2 + 1 + time;
			breal = x>b[j] ? x : b[j];
		}
		std::cout << time << "\n";
	}



	return 0;
}

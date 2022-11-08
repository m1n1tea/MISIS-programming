

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n;
	int a, b, c, d;
	int sum;
	std::cin >> n;
	std::vector <int> v(n+1);
	int sum1 = 0;
	std::cin >> a >> b >> c >> d;
	sum1= 400 - a - b - c - d;
	v[1] = sum1;
	for (int i = 2; i <= n; i++) {
		std::cin >> a >> b >> c >> d;
		sum = 400 - a - b - c - d;
		v[i] = sum;
	}
	sort(v.begin(), v.end());

	for (int i = 1; i <= n; i++) {
		if (v[i] == sum1) {
			std::cout << i;
			break;
		}
	}
	

	return 0;
}

#include <iostream>

int main()
{
	int n,ans;
	ans = 0;
	std::cin >> n;
	while (n) {
		ans += (n & 1);
		n >>= 1;
	}
	std::cout << ans;
	return 0;
}

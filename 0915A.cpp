
#include <iostream>


int main()
{
	int n, l;
	int x;
	int ans=0;
	std::cin >> n >> l;
	while (n--) {
		std::cin >> x;
		if (l % x == 0) {
			x = l / x;
			if (ans == 0)
				ans = x;
			ans = x < ans ? x : ans;
		}
	}
	std::cout << ans;


	return 0;
}

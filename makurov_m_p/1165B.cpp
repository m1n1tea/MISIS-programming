

#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n+1);
	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		std::cin >> a[i];
	}
	std::sort(a.begin(),a.end());
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] > ans) {
			ans++;
		}
	}
	std::cout << ans;
	
	return 0;
}

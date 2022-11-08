// 886B.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include <map>

int main()
{
	int n;
	int x;
	std::cin >> n;

	std::map <int,int> a;

	for (int i = 1; i <=n ; i++) {
		std::cin >> x;
		a[x] = i;
	}
	int ans = 1;
	int last = n+1;
	for (auto x : a) {
		if ( x.second < last) {
			ans = x.first;
			last = x.second;
		}
	}
	std::cout << ans;

	return 0;
}

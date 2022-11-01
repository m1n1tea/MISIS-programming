
#include <iostream>
#include <vector>


int main()
{
	int64_t n, k;
	std::cin >> n >> k;
	std::vector<int64_t> a(n);
	for (int64_t& x : a)
		std::cin >> x;
	int64_t cnt = 0;
	int64_t ans=0;
	for (int i = 0; i < n-1; i++) {
		if (a[i] == n) {
			ans = i;
			break;
		}
		if (a[i+1] < a[ans]) {
			if (cnt == 0)
				ans = i;
			cnt++;
		}
		else {
			cnt = 0;
			ans = i + 1;
		}
		if (cnt == k)
			break;
		if (i == n - 2)
			ans = n-1;
	}
	std::cout << a[ans];


	return 0;
}

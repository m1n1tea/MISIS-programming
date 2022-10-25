
#include <iostream>
#include <vector>

int main()
{
	int t, n, a,cnt,m,mn,e,ans;
	bool check;
	std::vector<int> even(0);
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n;
		cnt = 0;
		ans = 0;

		for (int j = 0; j < n; j++) {
			std::cin >> a;
			while ((a & 1) == 0) {
				cnt++;
				a /= 2;
			}
		}
		if (cnt >= n) {
			std::cout << 0 << "\n";
			continue;
		}
		m = 1;
		mn = 0;
		while (m <= n) {
			m <<= 1;
			mn++;
		}
		m >>= 1;
		mn--;
		even.clear();
		even.resize(mn+1, 0);
		even[mn] = 1;
		e = 1;
		for (int j = mn-1; j > 0; j--) {
			m >>= 1;
			even[j] = n / m-e;
			e += even[j];
		}
		check = 0;
		for (int j = mn; j > 0; j--) {
			if (check)
				break;
			while (even[j] > 0) {
				cnt += j;
				even[j]--;
				ans++;
				if (cnt >= n) {
					check = 1;
					break;
				}
			}
		}
		if (check)
			std::cout << ans << "\n";
		else
			std::cout << -1 << "\n";



	}
	return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
	uint64_t n, a, b,s1;
	std::cin >> n >> a >> b >> s1;
	std::vector<uint64_t> s(n - 1);
	int sum = s1;
	for (int i = 0; i < n-1; i++) {
		std::cin >> s[i];
		sum += s[i];
	}

	std::sort(s.rbegin(), s.rend());
	int cnt = 0;
	while (sum * b > s1 * a) {
		sum -= s[cnt];
		cnt++;
	}
	std::cout << cnt;



	return 0;
}

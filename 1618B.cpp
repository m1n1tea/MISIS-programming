#include <iostream>
#include <string>

int main()
{
	int t,n;
	std::string n1;
	std::string n2;
	std::string ans;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n;

		std::cin >> n2;
		ans= n2[0];

		for (int j = 1; j < n-2; j++) {
			n1 = n2;
			std::cin >> n2;

			if (n1[1] != n2[0])
				ans += n1[1];

			ans += n2[0];

		}
		ans += n2[1];
		if (ans.size() == (n - 1))
			ans += 'a';


		std::cout << ans << "\n";
	}

}


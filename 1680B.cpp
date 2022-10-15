
#include <iostream>
#include <vector>
#include <string>


int main()
{
	bool ans;
	int t, n,m;
	int x;
	std::cin >> t;
	std::vector<std::string> fl(0);


	for (int i = 0; i < t; i++) {
		std::cin >> n >> m;
		fl.clear();
		fl.resize(n);
		for (std::string& s : fl)
			std::cin >> s;
		x = -1;
		ans = 0;
		for (std::string& s : fl) {
			if (ans)
				break;

			for (int j = 0; j < m;j++) {

				if (s[j] == 'R') {
					if (x == -1)
						x = j;

					if (x > j)
						ans = 1;

					break;

				}
			}
		}
		if (ans)
			std::cout << "NO" << "\n";
		else
			std::cout << "YES" << "\n";



	}



	return 0;
}

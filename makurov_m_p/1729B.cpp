
#include <iostream>
#include<string>


int main()
{

	int q = 0;
	std::string t = "";
	int n = 0;


	int j = 0;
	char tlast = 0;

	std::string ans = "";
	std::string ans0 = "";

	std::string snum = "";
	int inum = 0;
	

	std::cin >> q;

	for (int i = 0; i < q; i += 1) {
		ans = "";
		std::cin >> n;
		std::cin >> t;
		j = 0;
		while (j < n) {
			tlast = t[n - 1 - j];
			if (tlast != '0') {
				tlast = tlast + 48;
				t.erase(n - 1 - j, 1);
				j += 1;
			}
			else {
				snum = t[n - 3 - j];
				snum+= t[n - 2 - j];
				inum = stoi(snum);
				tlast = inum + 96;
				t.erase(n - 3 - j, 3);
				j += 3;
			}
			ans0= tlast;
			ans.insert(0, ans0);
		}
		std::cout << ans << "\n";

	}

}

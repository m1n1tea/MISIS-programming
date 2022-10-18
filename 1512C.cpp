
#include <iostream>
#include <string>
#include <vector>
#include <cmath>


int main()
{
	int t,n,k = 0;
	int cnt0, cnt1 = 0;
	int jk;
	std::string s = "";
	std::string kstr;

	std::cin >> t;
	std::vector<bool> ans(t, 1);
	



	for (int i = 0; i < t; i++) {
		std::cin >> n >> k;
		kstr.clear();
		kstr.resize(k, '_');
		std::cin >> s;
		cnt0 = 0;
		cnt1 = 0;
		
		for (int j = 0; j < n; j++) {
			jk = j % k;
			if (s[j] == '0') {
				if (kstr[jk] == '_') {
					kstr[jk] = s[j];
					cnt0++;
				}
				else if (s[j] != kstr[jk]) {
					ans[i] = 0;
					break;
				}

			}
			if (s[j] == '1') {
				if (kstr[jk] == '_') {
					kstr[jk] = s[j];
					cnt1++;
				}
				else if (s[j] != kstr[jk]) {
					ans[i] = 0;
					break;
				}

			}
		}
		if (cnt0>k/2 || cnt1>k/2)
			ans[i] = 0;


	}

	for (int i = 0; i < t; i++)
		if (ans[i] == 0)
			std::cout << "NO" << "\n";
		else
			std::cout << "YES" << "\n";
		
}



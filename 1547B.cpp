#include <iostream>
#include<string>

int main()
{


	int t = 0;
	std::string s = "";
	int n = 0;
	char alp = 'a';
	char sfirst = '0';
	char slast = '1';


	std::cin >> t;

	for (int i = 0; i < t; i += 1) {
		std::cin >> s;
		n = s.length();
		alp = 'a' + n;
		for (int j = 0; j < n; j += 1) {

			alp -= 1;
			sfirst = s[0];
			slast = s[n - 1 - j];
			if (sfirst != alp && slast != alp) {
				std::cout << "NO" << "\n";
				break;
			}
			else {
				if (sfirst == alp) {
					s.erase(0, 1);
				}
				else {
					s.erase(n - 1 - j, 1);
				}
			}

			if (j == n - 1) {
				std::cout << "YES" << "\n";
			}
		}
	}

}
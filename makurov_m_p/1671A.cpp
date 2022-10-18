
#include <iostream>
#include <string>


int main()
{
	int t;
	std::string s;
	int cnta;
	int cntb;
	int ans;
	std::cin >> t;


	for (int i = 0; i < t; i++) {
		std::cin >> s;
		cnta = 0;
		cntb = 0;
		for (char& ch : s) {

			if (ch == 'a') {
				if (cntb == 1)
					break;
				cntb = 0;
				cnta++;
			}

			if (ch == 'b') {
				if (cnta == 1)
					break;
				cnta = 0;
				cntb++;
			}

		}
		if (cnta == 1 || cntb == 1)
			std::cout << "NO" << "\n";
		else
			std::cout << "YES" << "\n";

	}

	return 0;
}

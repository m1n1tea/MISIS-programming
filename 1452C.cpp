#include <iostream>
#include <string>

int main()
{
	int t;
	std:: string n;
	int cnt1;
	int cnt2;
	int cnt;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n;
		cnt = 0;
		cnt1 =0;
		cnt2= 0;


		for (char j : n) {
			if (j == '[')
				cnt1++;
			if (j == '(')
				cnt2++;


			if (j == ']' && cnt1) {
				cnt++;
				cnt1--;
			}
			if (j == ')' && cnt2) {
				cnt++;
				cnt2--;
			}


		}

		std::cout << cnt << "\n";
	}

}


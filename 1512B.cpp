
#include <iostream>
#include <vector>
#include <string>


int main()
{
	bool ans;
	int t, n;
	int x1,y1,x2,y2;
	std::cin >> t;
	std::vector<std::string> fl(0);


	for (int i = 0; i < t; i++) {
		std::cin >> n;
		fl.clear();
		fl.resize(n);
		for (std::string& s : fl)
			std::cin >> s;
		x1 = -1;
		y1 = -1;
		x2 = -1;
		y2 = -1;

		for (int i = 0; i < n; i++) {
			if (x2 != -1)
				break;
			for (int j = 0; j < n; j++) {
				if (fl[i][j] == '*')
					if (x1 == -1) {
						x1 = i;
						y1 = j;
					}
					else {
						x2 = i;
						y2 = j;
						break;
					}
			}
		}


		if (x1 != x2 && y1 != y2) {
			fl[x1][y2] = '*';
			fl[x2][y1] = '*';
		}

		else if (x1 == x2) {

			if (x1 == n - 1)
				x1--;
			else
				x1++;

			fl[x1][y1] = '*';
			fl[x1][y2] = '*';
		}

		else if (y1 == y2) {

			if (y1 == n - 1)
				y1--;
			else
				y1++;

			fl[x1][y1] = '*';
			fl[x2][y1] = '*';
		}

		for (std::string& s : fl)
			std::cout << s << "\n";


	}



	return 0;
}

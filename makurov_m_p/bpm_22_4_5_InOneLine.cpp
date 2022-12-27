
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>


int main()
{
	std::string line;
	std::string ans;
	std::getline(std::cin, line);
	reverse(line.begin(), line.end());
	int64_t cnt = 0;
	for (char ch : line) {
		if (cnt % 2 == 0)
			ans += ch;
		if (ch == ' ')
			cnt++;
	}
	std::cout << ans;


	return 0;
}

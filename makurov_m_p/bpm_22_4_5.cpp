
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>


int main()
{
	std::vector<std::string> v;
	std::string x;
	while (std::cin >> x) {
		reverse(x.begin(),x.end());
		v.push_back(x);
	}
	reverse(v.begin(),v.end());
	int64_t l = v.size();
	for (int64_t i = 0; i < l; i += 2) {
		std::cout << v[i] << " ";
	}

	return 0;
}

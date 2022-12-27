
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
#include <fstream>


int main()
{
	std::ifstream file;
	file.open("C://CMake//Exam//text.txt"); //файл с массивом
	std::vector<std::string> v;
	std::string x;
	while (!file.eof()) {
		file >> x;
		reverse(x.begin(),x.end());
		v.push_back(x);
	}
	reverse(v.begin(),v.end());
	int64_t l = v.size();
	for (int64_t i = 0; i < l; i += 2) {
		std::cout << v[i] << " ";
	}
	file.close();

	return 0;
}



#include <iostream>
#include <vector>


int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	std::vector<int> b(n);

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		b[a[i] - 1] = i + 1;
	}


	for (int i = 0; i < n; i++) {
		std::cout << b[i] << " ";
	}



	return 0;
}

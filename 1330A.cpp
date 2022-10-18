#include <iostream>
#include <array>
#include <algorithm>
using std::cout;
using std::cin;
using std::array;
 
int main()
{
	int t = 0;
	int n = 0;
	int x = 0;
	int ansmin = 0;
	array<int, 100> a{ 0 };
	array<int, 5> ans{ 0 };
 
	cin >> t;
 
	int j1 = 0;
	int a0 = 0;
 
 
	for (int i = 0; i < t; i += 1) {
		cin >> n;
		cin >> x;
 
		ansmin = x;
 
		for (int j = 0; j < n; j += 1) {
			cin >> a[j];
			}
		std::sort(std::begin(a), std::end(a));
 
 
		a0 = 0;
		for (int j = 0; j < n; j += 1) {
			j1 = j + 100 - n;
			if (ansmin + 1 >= a[j1] && a[j1]!=a0) {
				ansmin += 1;
				a0 = a[j1];
			}
 
		}
		ans[i] = ansmin;
		for (int j = 0; j < 100; j += 1) {
			a[j] = 0;
		}
 
 
	}
 
	for (int i = 0; i < t; i += 1) {
		cout << ans[i] << "\n";
	}
}
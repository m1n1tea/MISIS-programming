#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main()
{
	
	int n, r;
	

	std::cin >> n >> r;

	double pi = M_PI / n;
	double si,k,ans;

	si =std::sin(pi);
	k = si / (1 - si);
	ans = r * k;
	printf("%.10f",ans);
}


#include <iostream>
#include <array>
#include <string>

int main()
{
    int t = 0;
    int n = 0;
    int b = 0;
    std::string s = "";
    std::array<int, 100>a{0};





    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        std::cin >> n;
        for (int j = 0; j < n; j += 1) {
            std::cin >> a[j];
        }



        for (int j = 0; j < n; j += 1) {
            std::cin >> b;
            std::cin >> s;
            for (int k = 0; k < b; k += 1) {
                if (s[k] == 'U') {
                    a[j] -= 1;
                }
                else {
                    a[j] += 1;
                }

            }
            if (a[j] < 0) {
                a[j] = ((a[j] % 10) + 10)%10;
            }
            else {
                a[j] = (a[j] % 10);
            }
        }



        for (int j = 0; j < n; j += 1) {
            std::cout << a[j] << ' ';
        }
        std::cout << '\n';
    }

}

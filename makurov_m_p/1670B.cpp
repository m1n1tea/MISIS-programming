
#include <iostream>
#include <string>
#include <array>

int main()
{
    std::ios::sync_with_stdio(false);
    int t = 0;
    char ch;
    int is;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        int n = 0;
        std::string s;

        std::cin >> n;
        std::cin >> s;


        int k = 0;
        std::cin >> k;


        std::array<bool, 128> spec{};

        for (int i = 0; i < k; i++) {
            std::cin >> ch;
            spec[ch] = 1;
        }

        int maxcnt = 0;
        int cnt = 1;

        for (int i = 1; i < n; i++) {
            if (spec[ s[i] ] == 1) {
                if (cnt>maxcnt)
                    maxcnt=cnt;
                cnt = 0;
            }
            cnt ++;
        }

        std::cout << maxcnt << '\n';
    }
}

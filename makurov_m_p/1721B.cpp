#include <iostream>


int main()
{
    int t = 1;
    int n = 1;
    int m = 1;
    int sx = 1;
    int sy = 1;
    int d = 0;
    bool if1 = 0;
    bool if2 = 0;
    bool if3 = 0;
    bool if4 = 0;


    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        std::cin >> n;
        std::cin >> m;
        std::cin >> sx;
        std::cin >> sy;
        std::cin >> d;
        if1 = (sx - d) < 2;
        if2 = (sy - d) < 2;
        if3 = (sx + d) >= n;
        if4 = (sy + d) >= m;
        if ((if1 && if3) || (if2 && if4) || (if1 && if2) || (if3 && if4)) {
            std::cout << -1 <<'\n';
        }
        else {
            std::cout << m+n-2 << '\n';
        }
        
    }
}
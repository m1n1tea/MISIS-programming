// 1717B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


int main()
{
    int t = 1;
    int n = 1;
    int k = 1;
    int r = 1;
    int c = 1;
    int ost = 0;


    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        std::cin >> n;
        std::cin >> k;
        std::cin >> r;
        std::cin >> c;
        ost = (r + c - 2) % k;


        for (int y = 0; y < n; y += 1) {
            for (int x = 0; x < n; x += 1) {
                if ((y + x)%k == ost) {
                    std::cout << "X";
                }
                else {
                    std::cout << ".";
                }
            }
            std::cout << "\n";

        }
    }
}

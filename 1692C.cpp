
#include <iostream>
#include <array>
#include <string>

int main()
{
    int t;
    int x1, x2,x3;
    std::array<std::string, 8> board;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        x1 = -1;
        x2 = -1;
        x3 = -1;
        for (int j = 0; j < 8; j++)
            std::cin >> board[j];


        for (int j = 0; j < 8; j++) {
            x3 = x2;
            x2 = x1;
            x1 = board[j].find('#');

            if ((x1 == x3) &&  (x1+1==x2)) {
                std::cout << j << " " << x2 + 1 << "\n";
                break;
            }
        }

    }

}

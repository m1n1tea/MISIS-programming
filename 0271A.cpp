#include<iostream>
 
int main()
{
    int y=0;
    int x=0;
    int y0=0;
    int y1=0;
    int y2=0;
    int y3=0;
    int y4=0;
    std::cin >> y;
    while (x==0){
        y=y+1;
        y4=y%10;
        y0=y/10;
        y3=y0%10;
        y0=y0/10;
        y2=y0%10;
        y0=y0/10;
        y1=y0%10;
        y0=y0/10;
        if (y1!=y2 && y1!=y3 && y1!=y4 && y2!=y3 && y2!=y4 && y3!=y4)
        {
            x=1;
        }
    }
        std::cout << y;
}
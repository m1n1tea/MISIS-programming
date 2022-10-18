#include<iostream>
 
int main()
{
    int w=0;
    std::cin >> w;
    if (0 == w % 2 && w > 2){
        std::cout<<"YES";
    } else{
        std::cout<<"NO";
    }
    
}
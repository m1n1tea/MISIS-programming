#include<iostream>
#include <string>
using std::string;
 
 
int main()
{
int a=0;
string s;
string s1;
 
string num;
for(int x=0;x<5;x+=1){
    getline(std::cin,s1);
    s+=s1;
}
 
for (int i=0; i<5 ;i+=1){
    
    for(int j=0; j<5; j+=1){
        num=s[9*i+2*j];
        if (num=="1"){
            a=abs(i-2)+abs(j-2);
            std::cout << a;
            return 0;
        }
    }
}
}
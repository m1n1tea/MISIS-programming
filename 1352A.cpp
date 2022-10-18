#include<iostream>
using std::cout;
 
 
int main()
{
int t=0;
 
int n=0;
int n1=0;
int n2=0;
int n3=0;
int n4=0;
 
int a=0;
std::cin >> t;
for(int i=0;i<t;i+=1){
    std::cin >> n;
    a=0;
    if (n==10000){
        cout << 1 << "\n" << 10000 << "\n";
        continue;
    }
    
    n1=n/1000;
    n2=n/100%10;
    n3=n/10%10;
    n4=n%10;
    
    if (n1!=0) a+=1;
    if (n2!=0) a+=1;
    if (n3!=0) a+=1;
    if (n4!=0) a+=1;
    cout << a <<"\n";
    if (n1!=0) cout << n1*1000 <<" ";
    if (n2!=0) cout << n2*100  <<" ";
    if (n3!=0) cout << n3*10   <<" ";
    if (n4!=0) cout << n4      <<"\n";
    
}
 
}
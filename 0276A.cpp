#include<iostream>
using std::cout;
using std::cin;
 
 
int main()
{
int a=0;
int amax=0;
 
 
 
 
int n=0;
int k=0;
cin >> n;
cin >> k;
 
 
 
int f=0;
int t=0;
cin >> f;
cin >> t;
 
 
if (k>=t) amax=f;
else amax=f+k-t;
 
 
 
for(int i=0; i<n-1;i+=1){
    cin >> f;
    cin >> t;
    
    
    if (k>=t) a=f;
    else a=f+k-t;
    
    if (amax<a) amax=a;
}
cout << amax;
}
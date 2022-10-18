#include<iostream>
using std::cout;
using std::cin;
 
int main()
{
int n=0;
cin >> n;
int a[n];
int n1=n;
 
 
 
cin >> a[0];
for(int i=1; i<n;i+=1){
    cin >> a[i];
    for(int j=0; j<i;j+=1){
        if (a[j]==a[i]){
            a[j]=0;
            n1=n1-1;
            break;
        }
    }
}
 
 
cout << n1 << '\n';
for(int k=0; k<n;k+=1){
    if (a[k]!=0){
    cout << a[k] << " ";
    }
}
}
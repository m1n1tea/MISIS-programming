#include<iostream>
#include<string>
using std::cin;
using std::cout;
 
 
int main()
{
int t=0;
int a=0;
int b=0;
int ab=0;
int n=0;
int nmax=1;
 
 
cin >> t;
std::string answer[t];
for(int i=0 ; i<t ; i+=1){
    cin >> a;
    cin >> b;
    cin >> n;
    nmax=1;
    ab=a*b;
    while (n>nmax && ab%2==0){
        ab=ab/2;
        nmax*=2;
    }
    if (n>nmax){
        answer[i]="NO";
    } else {
        answer[i]="YES";
    }
}
for(int j=0 ; j<t ; j+=1)
cout << answer[j] <<'\n';
 
 
}
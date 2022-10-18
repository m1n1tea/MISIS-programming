#include<iostream>
#include<string>
using std::cin;
using std::cout;
 
 
int main()
{
std::string s;
int m=0;
int n=0;
cin >> n;
cin >> m;
bool ans=0;
for (int i=0; i<n ;i+=1){
    for (int j=0; j<m; j+=1){
        cin >> s;
        if (ans==0){
            if (s=="C"|| s=="M" || s=="Y" ){
                ans=1;
            }
        }
    }
}
if (ans==0){
    cout << "#Black&White";
} else{
    cout << "#Color";
}
}
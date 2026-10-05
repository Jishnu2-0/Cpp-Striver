#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cout<<"enter the number n";
    cin>>n;
    int cpy=n;
    int rev=0;
    while (cpy>0){
        int digit=cpy%10;
        cpy=cpy/10;
        rev = (rev*10)+digit;
    }
    cout<<rev;
}
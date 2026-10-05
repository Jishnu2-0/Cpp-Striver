#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter N";
    int n;
    cin>>n;
    int cpy =n;
    int rev=0;
    while(n>0){
        int digit= n%10;
        n=n/10;
         rev= rev*10+digit;
    }
    if(rev==cpy){
        cout<<"This is Palindrome";
    }
    else{
        cout<<"this is not a palindrome";
    }

}
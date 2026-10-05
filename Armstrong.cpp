#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"input N";
    int N;
    cin>>N;
    int sum=0;
    int c=0;
    int cpy=N;
    int digit=0;
    while(N>0){
        digit = N%10;
        N=N/10;
        c=c+1;
    }
    N=cpy;
    while(N>0){
        int digit = N%10;
        N=N/10;
        sum=sum+pow(digit,c); 
        cout<<sum<<" ";
    }
    if(sum==cpy){
        cout<<"It is armstrong";
    }
    else{
        cout<<"It is not a armstrong";
    }
}
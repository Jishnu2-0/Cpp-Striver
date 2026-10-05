#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"input n: ";
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==1){
        cout<<"its a prime number";
    }
    else{
        cout<<"not a prime number";
    }
}
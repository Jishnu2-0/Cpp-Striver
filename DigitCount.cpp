#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0;
    int n=0;
    cin>>n;
    while(n>0){
        n=n/10;
        cnt=cnt+1;
    }
    cout<<cnt;
    
}
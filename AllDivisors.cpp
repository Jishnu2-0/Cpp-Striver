#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"input N";
    int N=0;
    cin>>N;
    for(int i=1;i<=sqrt(N);i++){
        if(N%i==0){
            if(i!=N/i){
                cout<<i<<" "<<N/i<<" ";
            }
            else{
                cout<<i;
            }
            
        }   
    }
}
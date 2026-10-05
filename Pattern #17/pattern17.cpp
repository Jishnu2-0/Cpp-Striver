#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter N";
    int N;
    cin>>N;
    char c='@';
    for(int i=1;i<=N;i++){
        for(int j=1;j<=(N*2)-1;j++){
            if(j<=(N-i)){
                cout<<" ";
            }
            if(j>((N*2)-1)-(N-i)){
                cout<<" ";
            }
            if(j>(N-i) && j<=N){
                c++; 
                cout<<c;                         
            }
            if(j<=(((N*2)-1)-(N-i)) && j>N){
                c--; 
                cout<<c;    
            }
        }
        c='@';
        cout<<endl;
    }
}

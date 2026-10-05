#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"enter N";
    cin>>N;
    int c;
    for( int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0 && j%2!=0){
                cout<<"0";
            }
            if(i%2==0 && j%2==0){
                cout<<"1";
            }
            if(i%2!=0&&j%2==0){
                cout<<"0";
            }
            if(i%2!=0&&j%2!=0){
                cout<<"1";
            }
        }
        cout<<endl;
    }
}
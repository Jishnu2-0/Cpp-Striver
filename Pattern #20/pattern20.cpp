#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter N";
    int N;
    cin>>N;
    int a=1;
    int b=2;
    for(int i=1;i<=(N);i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int space=(N*2)-2;space>=a;space--){
            cout<<" ";  
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        a=a+2;
    }
    for(int i=N-1;i>=(1);i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int space=1;space<=b;space++){
            cout<<" ";  
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        b=b+2;
    }
}
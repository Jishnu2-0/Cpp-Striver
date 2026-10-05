#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"input N";
    int N;
    cin>>N;
    int b=N;
    int space=2;
    for(int i=1;i<=(N);i++){
        for(int j=b;j>=1;j--){
            cout<<"*";
        }
        for(int i=2;i<space;i++){
            cout<<" ";
        }
         for(int j=b;j>=1;j--){
            cout<<"*";
        }
        space=space+2;
        b=b-1;
        cout<<endl;
    }
     b=1;
     space=(N*2)-2;
    for(int i=1;i<=(N);i++){
        for(int j=1;j<=b;j++){
            cout<<"*";
        }
        for(int i=space;i>=1;i--){
            cout<<" ";
        }
         for(int j=1;j<=b;j++){
            cout<<"*";
        }
        space=space-2;
        b=b+1;
        cout<<endl;
    }
}
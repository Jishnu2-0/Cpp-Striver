#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"input N";
    int N;
    cin>>N;
    char c;
    for(int i=1;i<=N;i++){
        c= char(int('A')+(N-i));
        for(int j=1;j<=i;j++){
            cout<<c;
            c++;
        }
        cout<<endl;
    }
}
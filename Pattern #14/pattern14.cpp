#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter N";
    int N;
    cin>>N;
    char c='A';
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<c;
            c++;
        }
        cout<<endl;
        c='A';
    }
}

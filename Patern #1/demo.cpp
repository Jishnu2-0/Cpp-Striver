#include <bits/stdc++.h>
using namespace std;
int main() {
    int i=1;    
    int j=1;
    int ni=1;
    int nj=1;
    cout<<"enter number of columns";
    cin>>  nj;
    cout<<"enter number of rows";
    cin>> ni;

    for(i=1;i<=ni;i++ ){
        for(j=1;j<=nj;j++){
            cout << "*";
        }
        cout<<endl;
    }
}

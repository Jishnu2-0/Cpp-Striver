#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter number of rows";
    int n=0;
    cin>> n;
    int a=n-1;
    for (int i=1;i<(n*2);i+=2){
        for(int s=a;s>=1;s=s-1)
        {   
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        a=a-1;
    }
}
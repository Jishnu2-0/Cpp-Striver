#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter number of rows";
    int n=0;
    cin>> n;
    int a=1;
    for (int i=1;i<(n*2);i+=2){
        for(int s=1;s<=a;s=s+1)
        {   
            cout<<" ";
        }
        for(int j=(n*2-1);j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
        a=a+1;
    }
}
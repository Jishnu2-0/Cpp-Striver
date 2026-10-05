#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"input N";
    cin>>N;
    int space = (N*2)-2;
    for(int i=1;i<=N;i++){
        int c=1;
        int b=i;
        for(int j=1;j<=(N*2);j++){
            if(j<=i){
                if(c<=N){
                    cout<<c;
                    c++;
                }
            }
            if(j>((N*2)-i)){
                    cout<<b;
                    b--;
            }
             
            if(j>i && j<=(N*2-i)){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
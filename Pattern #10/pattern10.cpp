#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "input N";
    int N;
    int b=1;
    int c=1;
    cin >> N;
    for( int i =1; i<=(N*2);i++){       //runs the loop n*2 times
        if(i<=N){
            for(int j=1;j<=b;j++){
                cout<<"*";
            }
            b++;
        }
        if(i>N){
            for(int j=N-1;j>=c;j--){
                cout<<"*";
            }
            c++;
            
        }
        cout<<endl;
    }
}


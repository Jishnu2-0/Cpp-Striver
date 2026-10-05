/* #include <bits/stdc++.h>
 using namespace std;
 int main(){
    cout<<"input n1:";
    int n1;
    cin>>  n1;
    cout<<"input n2:";
    int n2;
    cin>> n2;
    int c=0;
    int miNI = min(n1,n2);
    
    for(int i=1;i<=sqrt(miNI);i++){
        if(n1%i==0 && n2%i==0 && i>c ){
            c=i;
        }
        if(miNI%i==0 && n1%(miNI/i)==0 && n2%(miNI/i)==0 && miNI/i>c){
            c=miNI/i;
        } 
    }
    cout<<"GCD is "<<c;
 }*/

//Euclidean Algorithm 

#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"input n1 "<<"input n2: ";
    int n1;
    int n2;
    cin>>n1>>n2;
    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    cout<<max(n1,n2);
}

#include <bits/stdc++.h>
using namespace std;                                 
int main(){
    int N=0;
    cout << "input N";                              //say N=3
    cin>>N;
    int maxROWS=N*2;                                //maxROWS=6
    int space=1;                                   
    int a=N-1;                                      //a=2, used for space printing 
    int b=0;                                        //b=0 , also used for space printing
    int x=1;                                        // used to print number of asterisks ex. 1,3,5
    int y=maxROWS-1;                                //also used to print number of asterisks ex. 5,3,1
    for(int c=1;c<=(maxROWS);c++){                  //c=1,2,3,4,5,6 //runs the loop N*2 times
        if(c<=N){ 
            for(space=1;space<=a;space++){            
            cout<<" ";
            }
            a=a-1;
            for(int j=1;j<=x;j++){                  
                cout<<"*";
            }
            cout<<endl;
            x=x+2;
        }   
        if(c>N)
        {   
            for(space=0;space<b;space++){
                cout<<" ";
                
            }
            b++;
            for(int j=y;j>=1;j--){                  
                cout<<"*";
            }
            y=y-2;
            cout<<endl;
        }        

        }
              
    }


    

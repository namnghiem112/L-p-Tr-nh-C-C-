#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i,n=100;
    for(i=1;i<=n;i++){
        if(i%2!=0){
            if(i!=7 && i!=5 && i!=93){
                cout<<i<<" ";
            }
        }
    }
    return 0;

}
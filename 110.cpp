#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,j,k,dem=0;
    for(i=0;i<=200;i++){
        for(j=0;j<=100;j++){
            for(k=0;k<=40;k++){
                if(i+2*j+5*k==200){
                    dem++;
                }
            }
        }
    }
    cout<<dem;
    return 0;
}

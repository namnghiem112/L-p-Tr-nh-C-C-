#include<iostream>
#include<cmath>
using namespace std;
bool songuyento(long n){
    int dem=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem!=0){
        return 0;
    }
    return n;
}
int main(){
    int i,a,dem=0;
    cin>>a;
    for(i=2;i<=1000;i++){
        if(songuyento(i)){
         dem++;
        if(dem==a){
         cout<<"so nguyen to thu "<<a<<" la "<<i;
        }
      } 
    }
    return 0;
}
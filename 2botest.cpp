#include<iostream>
#include<cmath>
using namespace std;
int tinhtong(long n){
    int s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    return s;
    }
int main(){
    int sobotest;
    cin>>sobotest;
    while(sobotest--){
    long n;
    cout<<tinhtong(n);
    }

}
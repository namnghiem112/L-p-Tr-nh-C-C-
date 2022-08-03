#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,n;
    cout<<"nhap x= ";
    cin>>x;
    cout<<"nhap n= ";
    cin>>n;
    float s=pow(x,1.0/n);
    if(x>=0){
        if(n>=1){
            cout<<s;
        } else cout<<" nhap n>=1";
    } else cout<<"nhap x>=0";
    return 0;
}
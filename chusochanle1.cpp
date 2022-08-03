#include<iostream>
using namespace std;
int main(){
    int n,p,dem=0,k=0;
    cin>>n;
    if(n>0 && n<10E9)
    {
    while(n!=0){
        p=n%10;
        if(p%2==0){
            dem++;
        }
        else k++;
        n=n/10;
    }
    cout<<k<<" "<<dem;
    }
    return 0;
}
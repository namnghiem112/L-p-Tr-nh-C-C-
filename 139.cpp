#include<iostream>
#include<cmath>
using namespace std;
bool sohoanthien(long n){
    int i,s=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(s==n){
        return n;
    }
    return 0;
}
int main(){
    int n,a[100],dem=0,p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(sohoanthien(a[i])){
            p=a[i];
        }
    }
    if(p==0){
        cout<<"-1";
    }
    else cout<<p;
    return 0;
}
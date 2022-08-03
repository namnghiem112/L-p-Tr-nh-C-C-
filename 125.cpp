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
    if(dem==0){
        return n;
    }
    return 0;
}
int main(){
    int n,a[100],dem;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(songuyento(a[i]) && a[i]<100){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
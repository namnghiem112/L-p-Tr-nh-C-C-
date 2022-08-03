#include<iostream>
#include<cmath>
using namespace std;
bool sochinhphuong(long n){
    float p=sqrt(n);
    int dem=0;
    if(p==sqrt(n)){
        return n;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(sochinhphuong(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
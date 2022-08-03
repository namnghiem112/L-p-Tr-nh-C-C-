#include<iostream>
using namespace std;
int main(){
    int n,a[100],p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            p=a[i];
        } 
    }
    if(p==0){
      cout<<"-1";
    } else cout<<p;
    return 0;
}
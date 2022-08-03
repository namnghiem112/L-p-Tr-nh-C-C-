#include<iostream>
using namespace std;
int main(){
    int n,i,a[100];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<2004 && a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }
    return 0;

}
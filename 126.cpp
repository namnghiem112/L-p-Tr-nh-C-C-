#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,a[100],s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<0){
            s=s+a[i];
        }
    }
    cout<<s;
    return 0;
}
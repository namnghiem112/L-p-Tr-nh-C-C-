#include<iostream>
using namespace std;
int main(){
    int n,a[100],min=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<a[min]){
            min=i;
        }
    }
    cout<<min;
    return 0;
}
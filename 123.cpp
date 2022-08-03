#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,a[100],min=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i;
    for( i=0;i<n;i++){
        if(a[i]<a[min]){
            min=i;
        }
    }
    cout<<min;
    return 0;
}
#include<iostream>

using namespace std;
int main(){
    int n,i;
    cin>>n;
    int s=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            s=s+i;
       }
    }
    cout<<s;
    return 0;
}
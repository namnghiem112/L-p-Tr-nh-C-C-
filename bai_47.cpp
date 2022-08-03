#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p,s=0;
    while(n!=0){
        p=n%10;
        if(p%2==0){
            s=s+p;
        }
        n/=10;
    }
    cout<<s;
    return 0;

}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,p,s=0;
    cin>>n;
    while(n!=0){
        p=n%10;
        s=s*10+p;
        n/=10;
    }
    cout<<s;
    return 0;
}

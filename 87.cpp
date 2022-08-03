#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int s=0,i=0,n;
    cin>>n;
        while(s>n){
            i++;
            s=s+i;
        }
        cout<<i;
    return 0;
}
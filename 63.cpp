#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            cout<<i;
        }
    }
    return 0;
}
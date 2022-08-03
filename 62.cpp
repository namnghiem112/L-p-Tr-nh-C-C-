#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,max=1;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            if(i>max){max=i;}
        }
    }
    cout<<max;
    return 0;

}
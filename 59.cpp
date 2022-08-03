#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,p,s=0;
    cin>>n;
    int n1=n;
    while(n1!=0){
        p=n1%10;
        s=s*10+p;
        n1/=10;
    }
    int n2=n;
    if(n2==s){
        cout<<"la so doi xug";
    }
    else
    {
        cout<<"ko la so doi xug";
    }
    return 0;
}
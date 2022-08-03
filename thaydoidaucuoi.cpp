#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,p,s=1,dem=0,k;
    cin>>n;
    if(n<10E9){
    int n1=n;
    while(n1!=0){
        p=n1%10;
        n1/=10;
        dem++;
    }
    int n2=n;
    while(n2!=0){
        k=n2%10;
        s=s*10+k;
        n2/=10;
    }
    int n3=n-(s%10)*pow(10,dem-1)-(n%10);
    cout<<(n%10)*pow(10,dem-1)+n3+(s%10);
    }
    return 0;
}
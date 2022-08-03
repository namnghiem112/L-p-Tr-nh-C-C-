#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,s1,s2;
    cin>>x;
    s1=2*x*x+5*x+9;
    s2=(-2)*x*x+4*x-9;
    if(x>5){
        cout<<s1;
    }
    else cout<<s2;
    return 0;
}
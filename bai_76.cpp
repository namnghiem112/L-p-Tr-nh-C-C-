#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p;
    int dem=0;
    while (n>=2){
        p=n%3;
        if(p==1 || p==2){dem++;}
        n/=3;
    }
    if(dem==0){cout<<"la so dang 3^k";}
    else
    cout<<"ko la so co dang 3^K";
    return 0;
}
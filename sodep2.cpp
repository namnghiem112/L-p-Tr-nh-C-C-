#include<iostream>
#include<cmath>
using namespace std;
bool songuyento( int n){
    int dem=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem!=0){
        return false;
    }
    return true;
}
bool daysoF(int n){
    int p,s=0;
    while (n!=0){
        p=n%10;
        s=s+p;
        n/=10;
    }
    int s1=1,s2=1,s3=0,i;
    for(i=2;i<17;i++){
        s3=s1+s2;
        s1=s2;
        s2=s3;
        if(s==s3){
            return true;
        }
    }
    return false;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<b;i++){
        if(songuyento(i)==true && daysoF(i)==true){
            cout<<i<<" ";
        }
    }
    return 0;
}
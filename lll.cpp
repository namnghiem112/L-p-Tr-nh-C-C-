#include<iostream>
#include<math.h>
using namespace std;
bool songuyento( int n){
    int i,dem=0;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){dem++;}
    }
    if(dem==0){
        return n;
    }
    return 0;
}
bool dayfo( int n){
  int i,s1=0,s2=1,s3=1,a[100];
  for(i=2;i<17;i++){
        s3=s1+s2;
        s1=s2;
        s2=s3;
        a[i]=s3;
}
  for(i=2;i<17;i++){
    return s3;
    } 
}
int main(){
    int c,b,j,p,i,s=0;
    cin>>c>>b;
    if(c<b && b<1000){
        for(j=c;j<=b;j++){
          while(j!=0){
            p=j%10;
            s=s+p;
            j/=10;
          } 
            if(songuyento(j) && j==dayfo(j)){
                cout<<j<<" ";
            }
        }
    }
    return 0;
}

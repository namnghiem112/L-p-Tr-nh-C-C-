#include<iostream>
#include<math.h>
using namespace std;
int songuyento(int n){
  if(n==0||n==1) return 0;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  return 1;
}
int tongchuso(int n){
  int p,s=0;
  while(n!=0){
    p=n%10;
    s=s+p;
    n/=10;
  }
  return s;
}
int uoc(int n){
  int s=0;
  for(int i=2;i<=n;i++){
    if(n%i==0){
      for(int j=i;j<=n-1;i++){
        if(songuyento(j)==1) j=tongchuso(j);
        else if(songuyento(j)==0) j= uoc(j);
        s=s+j;
      }
    }
  }
  return s;
}

int main(){
  int n,s;
  cin>>n;
  if(n==1) cout<<"1";
  if(songuyento(n)==1) cout<<tongchuso(n);
  if(n!=1 && songuyento(n)==0 ){
    cout<<uoc(n);
  }
  return 0;
}
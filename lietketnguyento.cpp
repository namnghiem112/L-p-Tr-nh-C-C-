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
int main(){
    int n,a[100],i,k=0;
    cin>>n;
    for(i=0;i<n;i++){
       cin>>a[i];
    }
    for(i=0;i<n;i++){
      if(a[i]>1){
        if(songuyento(a[i])){
          k++;
        }
    }
  } cout<<k<<" ";
  for(i=0;i<n;i++){
      if(a[i]>1){
        if(songuyento(a[i])){
         cout<<a[i]<<" ";
        }
    }
  } 
    return 0;
}
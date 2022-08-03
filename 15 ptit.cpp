#include<iostream>
#include<math.h>
using namespace std;
int songuyento(int n){
  if(n<2) return 0;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  return 1;
}
int main(){
  int a,b;
  cin>>a>>b;
  if(a<b){
  	for(int i=a;i<=b;i++){
    if(songuyento(i)==1) cout<<i<<" ";
  }
  } else {
  	for(int i=b;i<=a;i++){
    if(songuyento(i)==1) cout<<i<<" ";
  }
  }
  cout<<endl;
  return 0;
}

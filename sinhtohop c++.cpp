#include<iostream>
using namespace std;
int n,stop=0,k,mang[100];
void khoitao(){
  for(int i=1;i<=k;i++){
    mang[i]=i;
  }
}
void inmang(){
  for(int i=1;i<=k;i++){
    cout<<mang[i];
  }
  cout<<" ";
}
void sinh(){
  int i=k;
  while(mang[i]==n-k+i) i--;
  if(i<=0) stop=1;
  else mang[i]++;
  int p=mang[i];
  while(i<=k) mang[i++]=p++;
}
int main(){
  int t;
  cin>>t;
  while(t--){
  cin>>n>>k;
  khoitao();
  while(stop==0){
    inmang();
    sinh();
    }
    stop=0;
    cout<<endl;
  }
}

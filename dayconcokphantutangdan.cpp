#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],ok;
void khoitao(){
  for(int i=1;i<=k;i++){
    a[i]=i;
  }
}
void sinh(){
  int i=k;
  while(i>0 && a[i]==n-k+i) i--;
  if(i==0) ok=0;
  else 
  {
    a[i]++;
    int p=a[i];
    while(i<=k) a[i++]=p++;
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
  cin>>n>>k;
  int mang[n];
  for(int i=0;i<n;i++) cin>>mang[i];
  sort(mang,mang+n);
  khoitao();
  ok=1;
  while(ok){
    for(int i=1;i<=k;i++) cout<<mang[a[i]-1]<<" ";
    cout<<endl;
    sinh();
  }
  }
  return 0;
}

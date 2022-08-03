#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,ok;
ll songuyento(ll n){
  if(n<2) return 0;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  return 1;
}
void khoitao(ll a[]){
  for(int i=0;i<n;i++) a[i]=0;
  a[n-1]=1;
}
void sinh(ll a[]){
  int i=n-1;
  while(i>=0 && a[i]==1) {
    a[i]=0;
    i--;
  }
  if(i==-1) ok=0;
  else 
  {
    a[i]=1;
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
  cin>>n;
  ll a[n];
  ll s[n];
  for(int i=0;i<n;i++) cin>>s[i];
  sort(s,s+n,greater<ll>());
  khoitao(a);
  ok=1;
  while(ok){
    ll sum=0;
    for(int i=0;i<n;i++){
      if(a[i]==1) sum+=s[i];
    }
    if(songuyento(sum))
    {
      for(int i=0;i<n;i++){
        if(a[i]==1) cout<<s[i]<<" ";
      }
      cout<<endl;
    }
    sinh(a);
    }
  }
}

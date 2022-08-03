#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k,ok;
void khoitao(ll a[]){
  for(int i=1;i<=k;i++){
    a[i]=i;
  }
}
void sinh(ll a[]){
  int i=k;
  while(i>=1 && a[i]==n-k+i) i--;
  if(i==0) ok=0;
  else 
  {
    a[i]++;
  }
    int p=a[i];
    while(i<=k) a[i++]=p++;
}
int main(){
  int t;
  cin>>t;
  while(t--){
  cin>>n>>k;
  ll a[n];
  ll s[n];
  for(int i=1;i<=n;i++) cin>>s[i];
  sort(s+1,s+n+1);
  khoitao(a);
  ok=1;
  while(ok){
    for(int i=1;i<=k;i++) cout<<s[a[i]]<<" ";
    cout<<endl;
    sinh(a);
  }
  }
}

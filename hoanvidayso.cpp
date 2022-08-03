#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,ok;
void khoitao(ll a[]){
  for(int i=1;i<=n;i++) a[i]=i;
}
void sinh(ll a[])
{
  int i=n-1;
  while(i>=1 && a[i]>a[i+1]) i--;
  if(i==0) ok=0;
  else 
  {
    for(int k=n;k>i;k--){
      if(a[k]>a[i]){
        swap(a[k],a[i]);
        break;
      }
    }
    reverse(a+i+1,a+n+1);
  }
}
int main(){
  cin>>n;
  ll a[n];
  ll s[n];
  for(int i=1;i<=n;i++) cin>>s[i];
  sort(s+1,s+n+1);
  khoitao(a);
  ok=1;
  while(ok){
    for(int i=1;i<=n;i++) cout<<s[a[i]]<<" ";
    cout<<endl;
    sinh(a);
  }
}

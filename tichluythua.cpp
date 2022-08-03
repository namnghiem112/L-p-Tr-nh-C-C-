#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c=1e9+7;
ll tich(ll a,ll b){
  if(a==0 && b!=0) return 0;
  if(b==1) return a;
  if(b==0) return 1;
  if(b%2==0){
    ll s=tich(a,b/2);
    return (s*s)%c;
  }
  else 
  {
    ll s=tich(a,b-1);
    return (s*a)%c;
  }
}
int main(){
  ll a,b;
  while(cin>>a>>b){
    if(a==0 && b==0) return 0;
    else cout<<tich(a,b)<<endl;
  }
  return 0;
}

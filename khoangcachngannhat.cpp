#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,m,y1,y2;
  cin>>n>>m>>y1>>y2;
  ll x=abs(y1-y2);
  ll a[n],b[m],c[m+n],min=INT_MAX;
  for(int i=0;i<n;i++){
    cin>>a[i];
    c[i]=a[i];
  }
  sort(a,a+n);
  for(int i=0;i<m;i++){
    cin>>b[i];
    c[i+n]=b[i];
  }
  sort(b,b+m);
  sort(c,c+m+n);
  int dem=0;
  for(int i=1;i<n+m;i++) {
    if(abs(c[i]-c[i-1])==min) dem++;
    if(abs(c[i]-c[i-1])<min) min=abs(c[i]-c[i-1]);
  }
  for(int i=1;i<n;i++){
    if(abs(c[i]-c[i-1])==min) dem--;
  }
  for(int i=1;i<m;i++){
    if(abs(c[i]-c[i-1])==min) dem--;
  }
  cout<<min+x<<" "<<dem;
}

#include<bits/stdc++.h>
using namespace std;
long long c=1e9+7;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n,k;
  cin>>n>>k;
  if(k>n) cout<<0<<endl;
  else
  {
  long long p=1;
  for(int i=n;i>=n-k+1;i--){
    p*=i;
    p%=c;
  }
  cout<<p<<endl;
    }
  }
  return 0;
}

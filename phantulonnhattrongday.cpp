#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n,k;
  cin>>n>>k;
  ll mang[n];
  for(int i=0;i<n;i++) cin>>mang[i];
  multiset<ll>mu;
  for(int i=0;i<k;i++) {
    mu.insert(mang[i]);
  }
  cout<<*mu.rbegin()<<" ";
  for(int i=k;i<n;i++){
    mu.erase(mu.find(mang[i-k]));
    mu.insert(mang[i]);
    cout<<*mu.rbegin()<<" ";
  }
  cout<<endl;
  }
  return 0;
}

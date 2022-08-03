#include<bits/stdc++.h>
using namespace std;
long long c=1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
  long long n;
  cin>>n;
  multiset<long long>mu;
  long long x;
  for(int i=0;i<n;i++){
    cin>>x;
    mu.insert(x);
  }
  long long sum=0;
  while(mu.size()>1){
    long long a = *mu.begin();
    mu.erase(mu.find(a));
    long long b = *mu.begin();
    mu.erase(mu.find(b));
    long long d=(a+b)%c;
    mu.insert(d);
    sum+=d;
    sum%=c;
  }
  cout<<sum<<endl;
}
}

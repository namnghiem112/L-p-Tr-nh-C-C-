#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n,s;
  cin>>n>>s;
  int mang[n];
  long long sum=0;
  for(int i=1;i<=n;i++){
    cin>>mang[i];
  }
  int dp[40005]={0};
  dp[0]=1;
  for(int i=1;i<=n;i++){
    dp[mang[i]]=1;
    for(int j=s;j>=mang[i];j--){
      if(dp[j-mang[i]]==1) dp[j]=1; 
    }
  }
  if(dp[s]==1) cout<<"YES\n";
  else cout<<"NO\n";
  }
}

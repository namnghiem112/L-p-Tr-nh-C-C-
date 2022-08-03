#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  int mang[n];
  long long sum=0;
  for(int i=1;i<=n;i++){
    cin>>mang[i];
    sum+=mang[i];
  }
  if(sum%2==0){
  int s=sum/2;
  int dp[10005]={0};
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
  else cout<<"NO\n";
  }
}

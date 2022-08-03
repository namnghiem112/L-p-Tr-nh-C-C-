#include<bits/stdc++.h> 
using namespace std; 
int b,n; 
int a[105],dp[105][25005]={0}; 
void solve(){ 
 int res=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=b;j++){
				if(j<a[i]) dp[i][j]=dp[i-1][j];
				else dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+a[i]);
				res=max(res,dp[i][j]);
			}
		}
		cout<<res<<endl;
  } 
int main(){ 
  cin>>b>>n; 
  for(int i=1;i<=n;++i) cin>>a[i]; 
  solve(); 
}

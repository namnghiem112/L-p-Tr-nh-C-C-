#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[1005],c[1005];
		int dp[1005][1005];
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>c[i];
		int res=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(j<a[i]) dp[i][j]=dp[i-1][j];
				else dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+c[i]);
				res=max(res,dp[i][j]);
			}
		}
		cout<<res<<endl;
	}
}

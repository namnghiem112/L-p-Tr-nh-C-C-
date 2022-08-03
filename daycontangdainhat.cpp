#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int mang[n+5],dp[n];
	for(int i=0;i<n;i++){
		cin>>mang[i];
	}
	dp[0]=1;
	for(int i=1;i<n;i++){
		int max=0;
		for(int j=0;j<i;j++){
			if(mang[i]>mang[j]){
				if(dp[j] > max) max=dp[j];
			}
		}
		dp[i]= max +1;
	}
	sort(dp,dp+n);
	cout<<dp[n-1]<<endl;
}


#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,m;
	string s1,s2;
	cin>>s1>>s2;
	n=s1.length(),m=s2.length();
	for(int i=0;i<=n;i++) a[i][0]=0;
	for(int j=0;j<=m;j++) a[0][j]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s1[i-1]==s2[j-1]) a[i][j]=a[i-1][j-1]+1;
			else
			{
				a[i][j]=max(a[i-1][j],a[i][j-1]);
			}
		}
	}
	cout<<a[n][m]<<endl;
	}
}

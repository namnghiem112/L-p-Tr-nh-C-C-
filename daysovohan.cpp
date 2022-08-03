#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
ll n,a[100][100];
void nhan(ll a[100][100],ll b[100][100]){
	ll res[100][100]={0};
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res[i][j]=0;
			for(int k=0;k<2;k++){
				res[i][j]+=a[i][k]*b[k][j];
				res[i][j]%=mod;
			}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			a[i][j]=res[i][j];
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	 cin>>n;
	 ll res[100][100];
	 for(int i=0;i<2;i++){
	 	for(int j=0;j<2;j++){
	 		if(i==j) res[i][j]=1;
	 		else res[i][j]=0;
		 }
	 }
	 a[0][0]=0;
	 a[0][1]=1;
	 a[1][0]=1;
	 a[1][1]=1;
	 while(n!=0){
	 	if(n%2==1) {
	 		nhan(res,a);
		 }
		 nhan(a,a);
		 n/=2;
	 }
	 cout<<res[0][1]<<endl;
	}
}

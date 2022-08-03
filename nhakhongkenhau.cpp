#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long mang[n+5];
		long long f[n+5];
		for(int i=0;i<n;i++){
			cin>>mang[i];
		}
		f[0]=mang[0];
		f[1]=max(mang[0],mang[1]);
		f[2]=mang[2]+mang[0];
		for(int i=3;i<n;i++){
			f[i]=max(f[i-2]+mang[i],f[i-3]+mang[i]);
		}
		sort(f,f+n);
		cout<<f[n-1]<<endl;
	}
}

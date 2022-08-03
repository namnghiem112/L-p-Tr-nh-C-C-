#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int mang[n];
		for(int i=0;i<n;i++) cin>>mang[i];
		int dpL[n+5];
		for(int i=0;i<n;i++){
			dpL[i]=mang[i];
			for(int j=0;j<i;j++){
				if(mang[i]>mang[j]) dpL[i]=max(dpL[i],dpL[j]+mang[i]);
			}
		}
		sort(dpL,dpL+n);
		cout<<dpL[n-1]<<endl;
	}
}


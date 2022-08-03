#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,j=0;
		cin>>n;
		int mang[n],mang2[n];
		for(int i=0;i<n;i++) cin>>mang[i];
		for(int i=n-1;i>=0;i--) {
			mang2[j]=mang[i];
			j++;
		}
		int dpL[n+5]={0},dpR[n+5]={0};
		dpL[0]=0;
		dpR[0]=0;
		for(int i=1;i<n;i++){
			if(mang[i]>mang[i-1]) dpL[i]=dpL[i-1]+1;
			else dpL[i]=0;
			if(mang2[i]>mang2[i-1]) dpR[i]=dpR[i-1]+1;
			else dpR[i]=0;
		}
		int res=-1;
		for(int i=0;i<n;i++){
			res=max(res,dpL[i]+dpR[n-i-1]+1);
		}
		cout<<res<<endl;
	}
}

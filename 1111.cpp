#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long p;
		cin>>p;
		if(p<10){
			if(p<2){
		 	cout<<p<<endl;
		}
		else cout<<p+10<<endl;
		}
		else
		{
		int k=0,A[100000]={0};
		for(int i=9;i>1;i--){
			while(p%i==0){
				A[k++]=i;
				p/=i;
			}
		}
		if(k==0) cout<<"-1";
		else for(int i=k-1;i>=0;i--) cout<<A[i];
		cout<<endl;
		}
	}
}

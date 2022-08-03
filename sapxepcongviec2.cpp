#include<bits/stdc++.h>
using namespace std;
struct job{
	int stt,fi,se;
};
bool cmp(job a, job b){
	return a.se>b.se;
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		job a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].stt>>a[i].fi>>a[i].se;
		}
		sort(a,a+n,cmp);
		int d=0,res=0;
		int f[1001]={0};
		for(int i=0;i<n;i++){
			while(f[a[i].fi] && a[i].fi>0) a[i].fi-=1;
			if(!f[a[i].fi] && a[i].fi>0){
				f[a[i].fi]=1;
				res+=a[i].se;
				d++;
			}
		}
		cout<<d<<" "<<res<<endl;
	}
} 

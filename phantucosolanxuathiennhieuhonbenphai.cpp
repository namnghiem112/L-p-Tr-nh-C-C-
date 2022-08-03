#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int mang[n+5];
		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin>>mang[i];
			mp[mang[i]]++;
		}
		for(int i=0;i<n;i++){
			int check=0;
			for(int j=i+1;j<n;j++){
				if(mp[mang[j]]>mp[mang[i]]){
					check=1;
					cout<<mang[j]<<" ";
					break;
				}
			}
			if(check==0) cout<<-1<<" ";
		}
		cout<<endl;
	}
}

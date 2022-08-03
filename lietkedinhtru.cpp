#include<bits/stdc++.h>
using namespace std;
int u,v;
vector<int>ve[1005];
bool ok[1005];
void DFS(int u){
	ok[u]=true;
	for(int i=0;i<ve[u].size();i++){
		if(!ok[ve[u][i]]){
			DFS(ve[u][i]);
		}
	}
}
int sotplienthong(){
	int k=0;
	for(int x=1;x<=u;x++){
		ok[x]=false;
	}
	for(int x=1;x<=u;x++){
		if(!ok[x]){
			k++;
			DFS(x);
		}
	}
	return k;
}
void lkdt(){
	int n=sotplienthong();
	for(int i=1;i<=u;i++){
		memset(ok,false,sizeof(ok));
		ok[i]=true;
		int k=0;
		for(int x=1;x<=u;x++){
			if(!ok[x]){
				k++;
				DFS(x);
			}
		}
		if(k>n) cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>u>>v;
		memset(ok,false,sizeof(ok));
		for(int i=1;i<=u;i++) ve[i].clear();
		for(int i=0;i<v;i++){
			int x,y;
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		lkdt();
	}
}


#include<bits/stdc++.h>
using namespace std;
int n,m,u2;
bool ok[1005];
int e[1005]; 
vector<int>ve[1005];
vector<pair<int,int>>res; 
void DFS(int u){
	ok[u]=true;
	pair<int,int>x;
	x=make_pair(e[u],u);
	res.push_back(x);
	for(int v:ve[u]){
		if(!ok[v]) {
			e[v]=u;
			DFS(v);
		}
	}
}
void treedfs(int u){
	for(int i=1;i<=n;i++) ok[i]=false;
	DFS(u);
	int dem=0;
	for(int i=1;i<=n;i++) if(ok[i]) dem++;
	if(dem==n){
		int x=0;
		for(auto i:res){
			x++;
			if(x==1) continue;
			cout<<i.first<<" "<<i.second<<endl;
		}
	}
	else cout<<-1<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m>>u2;
		memset(ok,false,sizeof(ok));
		memset(e,0,sizeof(e));
		res.clear();
		for(int i=1;i<=1000;i++) ve[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		treedfs(u2);		
	}
}

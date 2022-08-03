#include<bits/stdc++.h>
using namespace std;
int n,m,u2;
bool ok[1005];
int e[1005]; 
vector<int>ve[1005];
vector<pair<int,int>>res; 
void BFS(int u){
	queue<int>q;
	q.push(u);
	ok[u]=true;
	pair<int,int>k;
	while(!q.empty()){
		int x=q.front(); q.pop();
		k=make_pair(e[x],x);
		res.push_back(k);
		for(int v: ve[x]){
			if(!ok[v]) {
				e[v]=x;
				q.push(v);
				ok[v]=true;
			}
		}
	}
}
void treebfs(int u){
	for(int i=1;i<=n;i++) ok[i]=false;
	BFS(u);
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
		treebfs(u2);		
	}
}




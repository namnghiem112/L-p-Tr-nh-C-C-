#include<bits/stdc++.h>
using namespace std;
vector<int>ke[1005];
int vs[1005];
int truoc[1005];
void DFS(int u,int v){
	if(vs[v]==1) return;
	vs[u]=1;
	for(int i=0;i<ke[u].size();i++){
		if(vs[ke[u][i]]==0){
			truoc[ke[u][i]]=u;
			DFS(ke[u][i],v);
		}
	}
} 
void Trace(int u,int v){
	if(vs[v]==0) {
		cout<<-1;
		return ;
	}
	vector<int>a;
	while(u!=v){
		if(u==0){
			cout<<-1;
			return ;
		}
		a.push_back(u);
		u=truoc[u];
	}
	a.push_back(v);
	reverse(a.begin(),a.end());
	for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int e,v,x,y,k,q;
		cin>>e>>v>>k>>q;
		memset(vs,0,sizeof(vs));
		memset(truoc,0,sizeof(truoc));
		for(int i=0;i<1001;i++) ke[i].clear();
		for(int i=0;i<v;i++){
			cin>>x>>y;
			ke[x].push_back(y);
		}
		DFS(k,q);
		Trace(q,k);
		cout<<endl;
	}
}

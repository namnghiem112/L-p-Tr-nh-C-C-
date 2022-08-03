#include<bits/stdc++.h>
using namespace std;
vector<int>ve[1005];
int vs[1005];
int truoc[1005];
void BFS(int u,int v){
	if(vs[v]==1) return;
	queue<int>q;
	q.push(u);
	vs[u]=1;
	while(!q.empty()) {
		int x = q.front(); q.pop();
		for(int i=0;i<ve[x].size();i++){
			if(vs[ve[x][i]]==0) {
				q.push(ve[x][i]);
				truoc[ve[x][i]]=x;
				vs[ve[x][i]]=1;
			}
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
		for(int i=0;i<1001;i++) ve[i].clear();
		for(int i=0;i<v;i++){
			cin>>x>>y;
			ve[x].push_back(y);
		}
		BFS(k,q);
		Trace(q,k);
		cout<<endl;
	}
}

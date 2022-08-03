#include<bits/stdc++.h>
using namespace std;
vector<int>ve[1005];
int ok[1005];
void BFS(int u,int v){
	queue<int>q;
	q.push(u);
	ok[u]=1;
	while(!q.empty()){
		int x=q.front(); q.pop();
		if(x==v)
		{
			cout<<"YES";
			return;
		}
		for(int i=0;i<ve[x].size();i++){
			if(ok[ve[x][i]]==0){
				q.push(ve[x][i]);
				ok[ve[x][i]]=1;
			}
		}
	}
	cout<<"NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int u,v;
		cin>>u>>v;
		for(int i=0;i<1001;i++) ve[i].clear();
		for(int i=0;i<v;i++){
			int x,y;
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		int k;
		cin>>k;
		while(k--){
			memset(ok,0,sizeof(ok));
			int m,n;
			cin>>m>>n;
			BFS(m,n);
			cout<<endl;
		}
	}
}

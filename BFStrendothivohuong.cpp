#include<bits/stdc++.h>
using namespace std;
vector<int>ve[1000];
bool vs[1005]={0};
void BFS(int u){
	queue<int>q;
	q.push(u);
	vs[u]=1;
	while(!q.empty()) {
		int x = q.front(); q.pop();
		cout<<x<<" ";
		for(int i=0;i<ve[x].size();i++){
			if(vs[ve[x][i]]==0) {
				q.push(ve[x][i]);
				vs[ve[x][i]]=1;
			}
		}
	}
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		int e,v,x,y,k;
		cin>>e>>v>>k;
		memset(vs,0,sizeof(vs));
		for(int i=0;i<1001;i++) ve[i].clear();
		for(int i=0;i<v;i++){
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		BFS(k);
		cout<<endl;
	}
}

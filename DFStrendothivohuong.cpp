#include<bits/stdc++.h>
using namespace std;
vector<int>ve[1000];
bool vs[1005]={0};
void DFS(int u){
	cout<<u<<" ";
	vs[u]=1;
	for(int i=0;i<ve[u].size();i++){
		if(vs[ve[u][i]]==0) DFS(ve[u][i]);
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
		DFS(k);
		cout<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int u,v;
vector<int>ve[1005];
int ok[1005];
int e[1005];
bool DFS(int u){
	ok[u]=1;
	for(int i=0;i<ve[u].size();i++){
		if(ok[ve[u][i]]==0){
			if(DFS(ve[u][i])) return true;
		}
		else if(ok[ve[u][i]]==1) return true;
	}
	ok[u]=2;
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>u>>v;
		memset(ok,false,sizeof(ok));
		memset(e,0,sizeof(e));
		for(int i=1;i<=u;i++) ve[i].clear();
		for(int i=0;i<v;i++){
			int x,y;
			cin>>x>>y;
			ve[x].push_back(y);
		}
		int check=0;
		for(int i=1;i<=u;i++){
			if(ok[i]==0){
				if(DFS(i)){
					check=1;
					break;
				}
			}
		}
		if(check==0) cout<<"NO\n";
		else cout<<"YES\n";
	}
}


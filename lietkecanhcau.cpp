#include<bits/stdc++.h>
using namespace std;
int m,n,lt;
bool ok[1005];
vector<int>ve[1005];
vector<pair<int,int>>ve2;
void DFS(int u){
	ok[u]=true;
	for(int v: ve[u]){
		if(!ok[v]) DFS(v);
	}
}
int tplt(){
	memset(ok,false,sizeof(ok));
	int k=0;
	for(int x=1;x<=n;x++){
		if(!ok[x]){
			k++;
			DFS(x);
		}
	}
	return k;
}
void kt(int u,int s, int t){
	ok[u]=true;
	for(int i:ve[u])
	{
		if(u==s && i==t || u==t && i==s) continue;
		if(ok[i]==false)
		{
			kt(i,s,t);
		}
	}
}
void kq(){
	int dem;
	vector<pair<int,int>> tmp;
	for(pair<int,int> i:ve2){
		dem=0;
		memset(ok,false,sizeof(ok));
		for(int j=1;j<=n;j++){
			if(!ok[j])
			{
				dem++;
				kt(j,i.first,i.second);
			}
		}
		if(dem>lt) 
		{
			tmp.push_back(i);
		}
	}
	sort(tmp.begin(),tmp.end());
	for(pair<int,int> it:tmp)
		{
			cout << it.first << " " << it.second << " ";
		}
		tmp.clear();
	cout << endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		memset(ok,false,sizeof(ok));
		for(int i=1;i<=1000;i++) ve[i].clear();
		ve2.clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
			ve2.push_back({x,y});
		}
		lt=tplt();
		kq();
	}
}

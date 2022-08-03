#include<bits/stdc++.h>
using namespace std;
int a[100][100],n,u,vs[100],e[100];
void Try(int u){
	int v;
	cout<<u<<" "<<e[u]<<endl;
	vs[u]=1;
	for(v=1;v<=n;v++){
		if(vs[v]==0 && a[u][v]==1){
			e[v]=u;
			Try(v);
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	Try(1);
}

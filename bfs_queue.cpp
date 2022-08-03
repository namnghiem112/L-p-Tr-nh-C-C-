#include<bits/stdc++.h>
using namespace std;
int a[100][100],n,u,vs[100],e[100];
void Try(int u){
	queue<int>q;
  q.push(u);
  vs[u]=1;
  while(!q.empty()){
    int x = q.front();
    cout<<x<<" ";
    q.pop();
    for(int v=1;v<=n;v++){
      if(vs[v]==0 && a[x][v]==1){
        q.push(v);
        vs[v]=1;
      }
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
	Try(2);
}

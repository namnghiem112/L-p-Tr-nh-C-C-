#include<bits/stdc++.h>
using namespace std;

int v,e,u;
vector<int> res[1005];
bool tham[1005];

void input(){
    cin>>v>>e>>u;
    for(int i = 0 ; i < e ; i++){
        int x, y;
        cin>>x>>y;
        res[x].push_back(y);
        res[y].push_back(x);
    }
    memset(tham,false,sizeof(tham));
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    tham[u] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for(auto n : res[x]){
            if(!tham[n]){
                q.push(n);
                tham[n] = true;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        input();
        bfs(u);
        for(int i = 0 ; i <= 1005 ; i++){
            res[i].clear();
        }
        cout<<endl;
    }
}

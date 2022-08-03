#include<bits/stdc++.h>
using namespace std;
int n,cnt,a[1000],ok;
void khoitao(){
  a[1]=n;
  cnt=1;
}
void sinh(){
  int i=cnt;
  while(i>=1 && a[i]==1) i--;
  if(i==0) ok=0;
  else {
    a[i]--;
    int d=cnt-i +1;
    cnt=i;
    int q=d/a[i];
    int r=d%a[i];
    if(q) {
      for(int j=1;j<=q;j++){
        cnt++;
        a[cnt]=a[i];
      }
    }
    if(r){
      cnt++;
      a[cnt]=r;
    }
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    cin>>n;
    khoitao();
    ok=1;
    vector<string>ve;
    while(ok){
    	string s="";
      for(int i=1;i<=cnt-1;i++){
        s+=to_string(a[i])+" ";
      }
      s+=to_string(a[cnt]);
      ve.push_back(s);
      sinh(); 
    }
    cout<<ve.size()<<endl;
    for(string i:ve){
    	cout<<"("<<i<<")"<<" ";
	}
	ve.clear();
    cout<<endl;
  }
}



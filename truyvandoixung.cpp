#include<bits/stdc++.h>
using namespace std;
int kt(string s){
  string tmp=s;
  reverse(tmp.begin(),tmp.end());
  if(tmp==s) return 1;
  return 0;
}
int main()
{
  string s;
  cin>>s;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    char x;
    int a,b;
    cin>>x>>a>>b;
    if(x=='q'){
      string tmp2 = s.substr(a-1,b-a+1);
      if(kt(tmp2)==1) cout<<"YES\n";
      else cout<<"NO\n";
    }
    else if(x=='c'){
      s[a-1]= b+'0';
    }
  }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
  string s,tmp;
  cin>>s;
  int kt=0,dem=0,ok=0,stop=1,dem2=0,x;
  int n=s.length();
  for(int i=0;i<s.length();i++){
    if(s[i]=='@') {
            kt++;
            x=i;
        }
    if(s[i]=='.' ||s[i]=='_') {
      dem2++;
      continue;
    }
    if(s[i]==' '|| s[i]<'0' || (s[i]>'9' && s[i]<'@') ||(s[i]>'Z' && s[i]<'a') || s[i]>'z') stop=0;
  }
  stringstream ss(s);
  while(getline(ss,tmp,'@')){
    dem++;
    if(dem==1 && tmp.length()<=54) ok++;
    if(dem==2 && tmp.length()<=254) ok++;
  }
  if(kt==1 && ok==2 && stop==1 && dem2!=0 && s[n-1]!='.' && s[x+1]!='.') cout<<"YES\n";
  else cout<<"NO\n";
  }
}

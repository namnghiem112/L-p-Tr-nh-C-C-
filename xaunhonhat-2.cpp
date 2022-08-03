#include<iostream>
#include<cstring>
#include<cmath>
#include <limits.h>
#include<map>
using namespace std;
void kiemtra(){
  string s;
  cin>>s;
  map<char,int>mp;
  for(char x :s){
    mp[x]++;
  }
  int dem[256]={0},left=0,cnt=0;
  int ans=INT_MAX;
  for(int i=0;i<s.length();i++){
    dem[s[i]]++;
    if(dem[s[i]]==1) cnt++;
    if(cnt==mp.size()){
      while(dem[s[left]]>1){
        dem[s[left]]--;
        left++;
      }
      ans=min(ans,i-left+1);
    } 
  }
  cout<<ans<<endl;
}
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    kiemtra();
  }
  return 0;
}


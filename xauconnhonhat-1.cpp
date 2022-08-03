#include<iostream>
#include<cstring>
#include<cmath>
#include <limits.h>
using namespace std;
void kiemtra(){
  string s1,s2;
  cin>>s1>>s2;
  int dem1[256]={0},dem2[256]={0};
  for(int i=0;i<s2.length();i++){
    dem2[s2[i]]++;
  }
  int cnt=0,left=0,index=-1,ans;
  ans=INT_MAX;
  for(int i=0;i<s1.length();i++){
    dem1[s1[i]]++;
    if(dem1[s1[i]]<=dem2[s1[i]]) cnt++;
    if(cnt==s2.length()){
      while(dem1[s1[left]]>dem2[s1[left]] || dem2[s1[left]]==0){
        if(dem1[s1[left]]>dem2[s1[left]]) dem1[s1[left]]--;
        left++;
      }
      if(i-left+1<ans){
        ans=i-left+1;
        index=left;
      }
    }
  }
  if(index!=-1) cout<<s1.substr(index,ans)<<endl;
  else cout<<"-1"<<endl;
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


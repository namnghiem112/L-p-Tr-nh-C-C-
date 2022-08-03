#include<bits/stdc++.h>
using namespace std;
int main(){
  string s1,s2;
  getline(cin,s1);
  getline(cin,s2);   
  for(int i=0;i<s1.length();i++)
    s1[i]=tolower(s1[i]);
  for(int i=0;i<s2.length();i++)
    s2[i]=tolower(s2[i]);
  set<string>se,se2;
  string tmp;
  stringstream ss(s1);
  map<string,int>mp;
  while(ss >> tmp)
    {
      se.insert(tmp);
    }
  for(string x : se) mp[x]++;
  stringstream ss2(s2);
  tmp="";
  while(ss2 >> tmp)
    {
      se.insert(tmp);
      se2.insert(tmp);
    }
    for(string x : se2) mp[x]++;
  for(string x: se) cout<<x<<" ";
  cout<<endl;
  for(auto x : mp){
    if(x.second > 1)
    {
      cout<<x.first<<" ";
    }
  }
}

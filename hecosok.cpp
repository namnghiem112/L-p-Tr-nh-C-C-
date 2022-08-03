#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
	long long k,a,b,x,y,nho=0;
	cin>>k>>a>>b;
	string s1="",s2="",s="";
	s1=to_string(a);
  x=s1.length();
	s2=to_string(b);
  y=s2.length();
	if(x>y){
    for(int i=0;i<x-y;i++) s2="0"+s2;
  }
  else if(x<y)
  {
    for(int i=0;i<y-x;i++) s1="0"+s1;
  }
  int n=s1.length();
  for(int i=n-1;i>=0;i--){
    int p= (s1[i]-48)+(s2[i]-48)+nho;
    if(p>=k)
    {
      p=p-k;
      s=to_string(p)+s;
      nho=1;
    }
    else{
      s=to_string(p)+s;
      nho=0;
    }
  }
  if(nho!=0) s="1"+s;
  cout<<s<<endl;
    }
}

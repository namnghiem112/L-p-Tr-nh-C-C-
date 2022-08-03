#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int k,b,m;
ll sum2=0;
ll chuyen(string s){
  long long sum=0;
  reverse(s.begin(),s.end());
  for(int i=0;i<s.length();i++){
    sum=sum+(s[i]-'0')*pow(b,i);
  }
  return sum;
}
void sinh(){
  for(int i=0;i<s.length()-k+1;i++){
    string s1="";
    for(int j=i;j<k+i;j++){
      s1+=s[j];
    }
    sum2+=chuyen(s1)%m;
  }
}
int main(){
  cin>>s;
  cin>>k>>b>>m;
  sinh();
  cout<<sum2;
}

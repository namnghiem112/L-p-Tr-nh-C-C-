#include<iostream>
#include<string.h>
using namespace std;
string nhan(string s1,string s2){
	string s;
	long long res[s1.length()+s2.length()+1];
	for(int i=0;i<=s1.length()+s2.length();i++) res[i]=0;
	for(int i=s1.length()-1;i>=0;i--){
		for(int j=s2.length()-1;j>=0;j--){
			res[i+j+1]+=(s1[i]-'0')*(s2[j]-'0');
		}
	}
	for(int i=s1.length()+s2.length();i>=0;i--){
		if(res[i]>9) {
			res[i-1]+=res[i]/10;
			res[i]%=10;
		}
	}
	for(int i=0;i<s1.length()+s2.length();i++){
		s+=(res[i]+'0');
	}
  if(s[0]=='0') s.erase(0,1);
	return s;
}
int main(){
  int t;
  cin>>t;
  while(t--){
	string s1,s2;
	cin>>s1>>s2;
	cout<<nhan(s1,s2)<<endl;
  }
}

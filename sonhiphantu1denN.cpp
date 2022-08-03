#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string>qu;
		qu.push("1");
		string s;
		for(int i=0;i<n;i++){
			cout<<qu.front()<<" ";
			s=qu.front();
			qu.pop();
			int j=s.length()-1;
			while(j>=0 && s[j]=='1') {
				s[j]='0';
				j--;
			}
			if(j==-1) s="1"+s;
			else s[j]='1';
			qu.push(s);
		}
		cout<<endl;
	}
}


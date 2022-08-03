#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		map<char,int>mp;
		priority_queue<int>de;
		for(int i=0;i<s.length();i++)
		{
			mp[s[i]]++;
		}
		for(int i=0;i<s.length();i++){
			if(mp[s[i]]!=0){
				de.push(mp[s[i]]);
				mp[s[i]]=0;
			}
		}
		for(int i=1;i<=n;i++){
			if(!de.empty()){
				int x=de.top(); de.pop();
				de.push(x-1);			}
		}
		long long sum=0;
		while(!de.empty()){
			sum+=(long long) de.top()*de.top();
			de.pop();
		}
		cout<<sum<<endl;
	}
}

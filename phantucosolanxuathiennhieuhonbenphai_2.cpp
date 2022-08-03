#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int mang[n],mang2[n];
		stack<int>st;
		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin>>mang[i];
			mp[mang[i]]++;
		}
		for(int i=0;i<n;i++){
			while(!st.empty() && mp[mang[st.top()]] < mp[mang[i]]){
				mang2[st.top()]=mang[i];
				st.pop();
			}
			st.push(i);
			}
		while(!st.empty()) {
			mang2[st.top()]=-1;
			st.pop();
		}
		for(int i: mang2) cout<<i<<" ";
		cout<<endl;
	}
}


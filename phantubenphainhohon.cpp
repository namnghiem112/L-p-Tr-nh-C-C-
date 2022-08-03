#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int mang[n],mang2[n];
		memset(mang2,-1,sizeof(mang2));
		for(int i=0;i<n;i++) cin>>mang[i];
		stack<int>st;
		for(int i=0;i<n;i++){
			if(st.empty()) st.push(i);
			else 
			{
				while(!st.empty() && mang[st.top()]<mang[i]){
					for(int j=i+1;j<n;j++){
						if(mang[i]>mang[j]) {
							mang2[st.top()]= mang[j];
							break;
						}
					}
					st.pop();
				}
				st.push(i);	
			}
		}
		for(int i: mang2) cout<<i<<" ";
		cout<<endl;
	}
}

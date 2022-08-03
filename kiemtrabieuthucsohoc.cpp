#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		stack<char>st;
		getline(cin,s);
		int ok=1;
		for(int i=0;i<s.length();i++){
			if(s[i]==')'){
				ok=1;
				char top= st.top(); st.pop();
				while(top!='('){
					if(top=='+' || top=='-'||top=='/'||top=='*') ok=0;
					top=st.top(); st.pop();
				}
				if(ok) break;
			}
			else st.push(s[i]);
		}
		if(ok) cout<<"Yes\n";
		else cout<<"No\n";
	}
}

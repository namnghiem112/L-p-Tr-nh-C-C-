#include <bits/stdc++.h>
using namespace std;
long long mod = 123456789;
long long luythua(long long a, long long b){
	if(b==0 || a==1) return 1;
	if(b%2==0){
		long long s=luythua(a,b/2);
		return s*s %mod;
	}
	else {
		long long s=luythua(a,b-1);
		return s*a %mod;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		cout <<luythua(2,n-1)<<endl;
	}
}


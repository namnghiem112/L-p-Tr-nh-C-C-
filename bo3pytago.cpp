#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long n,a[5005],kt = 0;
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sort(a+1,a+n+1);
		for(int i = 3; i <= n; i++){
			int l = 1, r = i-1;
			while(l < r){
				if(a[l]*a[l] + a[r]*a[r] == a[i]*a[i]){
					kt = 1;
					break;
				}else if(a[l]*a[l] + a[r]*a[r] < a[i]*a[i]) l++;
				else r--; 
			}
		}
		if(kt) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
}


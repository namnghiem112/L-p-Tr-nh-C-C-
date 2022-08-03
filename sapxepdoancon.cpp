#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a[100005];
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		int maxx = a[1],minn=a[n],s1[100005],s2[100005],dem=0,m[100005],k=0;
		for(int i = 1; i <= n; i++){
			if(a[i] > maxx){
				maxx = a[i];
			}
			s1[i] = maxx;
		}
		for(int i = n; i > 0; i--){
			if(a[i] < minn){
				minn = a[i];
			}
			s2[i] = minn;
		}
		for(int i = 1; i <n; i++ ){
			if(s1[i] <= s2[i+1]) {
				m[k++] = i;
				dem++;
			}
		}
		cout <<dem<<endl;
		if(dem!=0) for(int i = 0;i < k; i++) cout <<m[i]<<" ";
		cout <<endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	long long n;
	cin>>n;
	long long mang[n],mang2[n],check=0;
	for(long long i=0;i<n;i++) cin>>mang[i];
	for(long long i=0;i<n-1;i++) cin>>mang2[i];
	for(long long i=0;i<n-1;i++){
		if(mang[i]!=mang2[i]){
			check=1;
			cout<<i+1<<endl;
			break;
		}
	}
	if(check==0) cout<<n<<endl;
	}
}

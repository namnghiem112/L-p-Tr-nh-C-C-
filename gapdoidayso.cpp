#include<bits/stdc++.h> 
using namespace std; 
int main(){
	int t;
	cin>>t;
	while(t--){
	long long n,k;
	cin>>n>>k;
	long long len=pow(2,n)/2;
	while(1){
		if(n==1) {
			cout<<1<<endl;
			break;
		}
		if(len==k){
			cout<<n<<endl;
			break;
		}
		if(k>len){
			k=len-(k-len);
		}
		n--;
		len/=2;
	}
	}
	return 0;
}

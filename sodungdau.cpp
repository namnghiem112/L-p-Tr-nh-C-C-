#include<iostream>
using namespace std;
int main () {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[100005]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			int check=0;
		for(int j=n-1;j>i;j--){
			if(a[i]<=a[j]){
			check=1;
			break;
			}
		}
		if(check==0) cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;	
}
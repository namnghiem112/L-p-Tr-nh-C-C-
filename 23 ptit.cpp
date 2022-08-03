#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	long long n,mang[10000000],dem=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>mang[i];
		if(mang[i]==0) dem++;
	}
	for(int i=0;i<n;i++){
		if(mang[i]!=0) cout<<mang[i]<<" ";
	}
	for(int i=0;i<dem;i++){
		cout<<"0"<<" ";
	}
	cout<<endl;
	}
	return 0;
}

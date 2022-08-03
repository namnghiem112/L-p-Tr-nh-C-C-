#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int mang[100],n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>mang[i];
	}
	for(int i=k;i<n;i++){
		cout<<mang[i]<<" ";
	}
	for(int i=0;i<k;i++){
		cout<<mang[i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){	
	int n,k;
	cin>>n>>k;
	int mang[n];
	for(int i=0;i<n;i++){
		cin>>mang[i];
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(mang[i]==k) dem++;
	}
	cout<<dem<<endl;
	}
}	

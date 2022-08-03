#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	long long mang[n],b[n];
	for(int i=0;i<n;i++) {
		cin>>mang[i];
		b[i]=-1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(mang[j]==i){
				b[i]=mang[j];
			}
		}
	}
	for(int i=0;i<n;i++) cout<<b[i]<<" ";
	cout<<endl;
	}
}

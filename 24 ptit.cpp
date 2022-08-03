#include<iostream>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	long long n,mang[100000],kt[100000]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>mang[i];
		kt[mang[i]]++;
	}
	sort(mang,mang+n);
	long long a=mang[n-1];
	for(int i=1;i<=a+1;i++){
		if(kt[i]==0) {
			cout<<i;
			break;
			}
		}
		cout<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int a[10]={1000,500,200,100,50,20,10,5,2,1};
	long long k,res=0;
	cin>>k;
	for(int i=0;i<10;i++){
		res+=k/a[i];
		k%=a[i];
	}
	cout<<res<<endl;
    }
    return 0;
}

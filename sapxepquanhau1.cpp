#include<bits/stdc++.h>
using namespace std;
bool h[11],c[11],nguoc[22],xuoi[22];
int s,res,n;
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!h[i] && !c[j] && !nguoc[i+j-1] && !xuoi[i-j+n])
		{
			h[i]=c[j]=nguoc[i+j-1]=xuoi[i-j+n]=true;
			if(i==n) res++;
			else Try(i+1);
			h[i]=c[j]=nguoc[i+j-1]=xuoi[i-j+n]=false;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>n;
	res=0;
	Try(1);
	cout<<res<<endl;
	}
}

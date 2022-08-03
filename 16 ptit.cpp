#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,mang[10000],kt[99999]={0};
    cin>>n;
    for(int i=0;i<n-1;i++){
      cin>>mang[i];
      kt[mang[i]]++;
    }
    for(int i=1;i<=n;i++){
      if(kt[i]==0){
        cout<<i<<endl;
        break;
      }
    }
  }
	return 0;
}


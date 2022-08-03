#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n,k;
  cin>>n>>k;
  long long len=pow(2,n-1);
  while(1){
    if(n==1){
      cout<<"A";
      break;
    }
    if(len==k){
      cout<<(char)(n+64);
      break;
    }
    if(k>len){
      k=len-(k-len);
    }
    n--;
    len/=2;
  }
  cout<<endl;
  }
}

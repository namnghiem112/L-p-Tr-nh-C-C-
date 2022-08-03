#include<bits/stdc++.h>
using namespace std;
const long long c=1e9+7;
int n,k;
void nhan(long long a[100][100],long long b[100][100]){
  long long res[100][100];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      res[i][j]=0;
      for(int k=0;k<n;k++){
        res[i][j]+=a[i][k]*b[k][j];
        res[i][j]%=c;
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      a[i][j]=res[i][j];
    }
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
  long long a[100][100],res[100][100]={0};
  cin>>n>>k;
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j) res[i][j]=1;
    }
  }
  while(k!=0){
    if(k%2==1){
      nhan(res,a);
    }
    nhan(a,a);
    k/=2;
  }
   long long sum=0;
   for(int i=0;i<n;i++) {
     sum+=res[i][n-i-1];
     sum%=c;
   }
   cout<<sum<<endl; 
   }
  return 0;
}

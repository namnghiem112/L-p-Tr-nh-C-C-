#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  long long n,mang[1000000],min=9999;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>mang[i];
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(abs(mang[i]+mang[j])<abs(min)) min=mang[i]+mang[j];
    }
  }
  cout<<min<<endl;
  }
  return 0;
}

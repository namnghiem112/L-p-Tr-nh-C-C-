#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
  int a;
  int s[3],kt[100000]={0};
  for(int i=0;i<3;i++){
    cin>>s[i];
  }
  sort(s,s+3);
  cin>>a;
  int dem,max=0;
  for(int i=0;i<3;i++){
    for(int j=2;j<=s[i];j++){
      dem=0;
      while(s[i]%j==0){
        dem++;
        s[i]/=j;
      }
      if(j>max) max=j;
      if(dem>kt[j]) kt[j]=dem;
    }
  }
  long long sum=1;
  for(int i=2;i<=max;i++){
    sum*=pow(i,kt[i]);
  }
  long long a1=pow(10,a-1);
  long long a2=pow(10,a);
  long long res=(a1+sum-1)/sum*sum;
  if(res<a2) cout<<res<<endl;
  else cout<<-1<<endl;
  }
}

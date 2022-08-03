#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
string nhan(string a,int k){
  string b;
  long long nho=0,tich=1;
  for(long long i=a.length()-1;i>=0;i--){
    tich=nho+(a[i]-'0')*k;
    nho=tich/10;
    tich=tich%10;
    b=b+char(tich+'0');
  }
  if(nho!=0) b+=char(nho+'0');
  while(b[0]=='0') b.erase(0,1);
  reverse(b.begin(),b.end());
  return b;
}
int main(){
  string a;
  int k;
  cin>>a>>k;
  cout<<nhan(a,k)<<endl;
}

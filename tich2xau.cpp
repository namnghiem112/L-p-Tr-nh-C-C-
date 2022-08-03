#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
string nhan1so(string a,int k){
  string b;
  long long nho=0,tich=1;
  for(long long i=a.length()-1;i>=0;i--){
    tich=nho+(a[i]-'0')*k;
    nho=tich/10;
    tich=tich%10;
    b=char(tich+'0')+b;
  }
  if(nho!=0) b=char(nho+'0')+b;
  // while(b[0]=='0') b.erase(0,1);
  // reverse(b.begin(),b.end());
  return b;
}
string tong(string a,string b){
  string tmp;
  int n1=a.length(),n2=b.length();
  if(n1<n2) a.insert(0,n2-n1,'0');
  if(n1>n2) b.insert(0,n1-n2,'0');
  int nho=0,x;
  for(int i=a.length()-1;i>=0;i--){
    x=(a[i]-'0')+(b[i]-'0')+nho;
    nho=x/10;
    x=x%10;
    tmp=char(x+'0')+tmp;
  }
  if(nho!=0) tmp=char(nho+'0')+tmp;
  // while(tmp[0]=='0') tmp.erase(0,1);
  return tmp;
}
string tich(string a,string b){
  string x,tmp1="",sum;
  int dem=0;
  for(int i=b.length()-1;i>=0;i--){
    x=nhan1so(a,(b[i]-48));
    x.insert(x.length(),dem,'0');
    dem++;
    sum=tong(x,tmp1);
    tmp1=sum;
  }
  return tmp1;
}
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
  string a,b;
  cin>>a>>b;
  cout<<tich(a,b)<<endl;
  }
}

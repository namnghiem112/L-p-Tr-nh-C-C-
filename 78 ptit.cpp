#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  cin.ignore();
  string s;
  int dem=0,dem1=0,dem2=0;
  getline(cin,s);
  if(s[0]!=32) dem++;
  int n=s.length();
  for(int i=0;i<n;i++){
    if(s[i]==' '&& s[i+1]!=' ') dem++;
  }
  for(int i=0;i<n;i++){
    if(s[i]==32 && s[i+1]!=32) {
      if(s[i-1]%2==0) {
        dem1++;
      }
      else dem2++;
    }
  }
  if(s[n-1]%2==0) dem1++;
  else dem2++;
  if((dem%2==0 && dem1>dem2)||(dem%2==1&&dem2>dem1)) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
  return 0;
}

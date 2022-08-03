#include <iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
   string s1,c,s2,s3;
   getline(cin,s1);
   getline(cin,s2);
   if(s1.length()>s2.length()){
     int a=s1.length()-s2.length();
     for(int i=1;i<=a;i++) c+="0";
     s2=c+s2;
   } else {
     int a=s2.length()-s1.length();
     for(int i=1;i<=a;i++) c+="0";
     s1=c+s1;
   }
   int nho=0;
   for(int i=s1.length()-1;i>=0;i--){
     int k=s1[i]-'0'+s2[i]-'0'+nho;
     nho=k/10;
     s3+=k%10+'0';
   }
   if(nho!=0) s3+=nho+'0';
   reverse(s3.begin(), s3.end());
   cout<<s3<<endl;
  }
  return 0;
}


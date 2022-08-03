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
   cin>>s1>>s2;
   if(s1.length()>s2.length()){
     int a=s1.length()-s2.length();
     for(int i=1;i<=a;i++) c+="0";
     s2=c+s2;
   } else {
     int a=s2.length()-s1.length();
     for(int i=1;i<=a;i++) c+="0";
     s1=c+s1;
   }
   int muon=0;
   for(int i=s1.length()-1;i>=0;i--){
     if(s1>s2){
       int x=s1[i]-s2[i]-muon;
       if(x<0){
         x=x+10+48;
         s3=char(x)+s3;
         muon=1;
       } else{
         x=x+48;
         s3=char(x)+s3;
         muon=0;
       }
     } else{
       int x=s2[i]-s1[i]-muon;
       if(x<0){
         x=x+10+48;
         s3=char(x)+s3;
         muon=1;
       } else{
         x=x+48;
         s3=char(x)+s3;
         muon=0;
     }
   }
    }
    cout<<s3<<endl;
  }
  return 0;
}

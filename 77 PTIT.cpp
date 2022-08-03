#include<iostream>
#include<string.h>
using namespace std;
struct danhsach{
  string ten;
};
int dem=0;
void kiemtra(string s,struct danhsach list[10000]){
  int k=0;
  for(int i=0;i<dem;i++){
    if(list[i].ten==s){
      k=1;
      break;
    }
  }
  if(k==0){
    list[dem].ten=s;
    dem++;
  }
}
int main(){
  struct danhsach list[10000];
  string s;
  int n;
  cin>>n;
  cin.ignore();
  for(int i=0;i<n;i++){
    getline(cin,s);
    kiemtra(s,list);
  }
  cout<<dem<<endl;
}

#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int timkiemnhiphan(int mang[],int l,int r,int x){
  int m;
  sort(mang,mang+r+1);
    while(l<=r) {
    m=(l+r)/2;
    if(mang[m]==x) return 1;
    else if(mang[m]<x) {
      l=m+1;
    } 
    else 
      r=m-1;
  }
  return -1;
}
int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  int mang[n][n],mang4[1000],mang3[1000],k=0,dem=0;
  set<int>mang2;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>mang[i][j];
      mang2.insert(mang[i][j]);
    }
  }
  for(int x:mang2) mang3[k++]=x;
  sort(mang3,mang3+k);
  int a=mang3[0]-1;
  for(int i=0;i<n;i++){
    int x=0;
    for(int j=0;j<n;j++){
        mang4[x++]=mang[i][j];
    }
    for(int p=0;p<k;p++){
      if(mang3[p]==a) continue;
      if(timkiemnhiphan(mang4,0,x-1,mang3[p])==-1){
        mang3[p]=a;
      }
    }
  }
    for(int p=0;p<k;p++)
      if(mang3[p]!=a) dem++;
    cout<<dem<<endl;
  }
  return 0;
}

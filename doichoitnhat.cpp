#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int mang[n];
    for(int i=0;i<n;i++) cin>>mang[i];
    int dem=0,index,check=0;
    for(int i=0;i<n-1;i++){
      int min=INT_MAX;
      for(int j=i+1;j<n;j++){
        if(mang[j]<min) {
          min=mang[j];
          index=j;
          check=1;
        }
      }
      if(check==0) break;
      if(mang[i]>mang[index]){
        swap(mang[i],mang[index]);
        dem++;
      }
    }
    cout<<dem<<endl;
  }
}

#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n,mang[100][100];
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>mang[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n/2;j++){
     if(i%2==1){
       int temp=mang[i][j];
       mang[i][j]=mang[i][n-1-j];
       mang[i][n-1-j]=temp;
     }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<mang[i][j]<<" ";
    }
  }
  cout<<endl;
  }
  return 0;
}

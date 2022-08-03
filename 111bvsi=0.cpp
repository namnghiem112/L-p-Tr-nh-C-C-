#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=n-1;
    for(int i=0;i<n-1;i++){
      for(int j=0;j<2*n-1;j++){
        if(j==k-i || j==k+i){
          cout<<" * ";
        }
        else cout<<"   ";
      }
      cout<<endl;
    }
    for(int i=0;i<2*n-1;i++){
      cout<<" * ";
    }
    return 0;
}
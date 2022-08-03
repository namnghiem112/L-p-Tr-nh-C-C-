#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int sobotest;
  cin>>sobotest;
  while(sobotest--){
    int n,a[100],temp,min;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
      min=a[n-1]-a[0];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]-a[i]<min){
              min=a[j]-a[i];
            }
        }
    }
    cout<<min<<endl;
  }
    return 0;
}
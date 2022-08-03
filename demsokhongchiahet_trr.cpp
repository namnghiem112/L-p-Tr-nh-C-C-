#include<bits/stdc++.h>
using namespace std;
int main(){
  int dem=0;
  for(int i=100;i<=200;i++) {
    if(i%2==0 || i%4==0 ||i%6==0) dem++;
  }
  cout<<dem;
}

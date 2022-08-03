#include <iostream>
#include<string>
using namespace std;
int main() {
  char mang1[5];
  int mang2[5];
  for(int i=0;i<100;i++){
   gets(mang1);
   for(int j=0;j<100;j++){
       if(i==j){
      cin>>mang2[j];
       }
  }
  }
  for(int i=0;i<100;i++){
    cout<<mang1[i];
  }
  return 0;
}
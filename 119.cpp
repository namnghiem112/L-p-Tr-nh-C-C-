#include<iostream>
#include<cmath>
using namespace std;
bool songuyento(long n){
    int dem=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem!=0){
        return 0;
    }
    return n;
}
int main(){
    int n,i;
    cin>>n;
    for(i=2;i<=n;i++){
        if(songuyento(i)){
          cout<<i<<" ";
          } 
    }
    return 0;
}
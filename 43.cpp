#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,p;
    cin>>n;
    int dem=0;
    while (n!=0){
        p=n%10;
        n/=10;
        dem++;
    }
    cout << dem;
    return 0;
}

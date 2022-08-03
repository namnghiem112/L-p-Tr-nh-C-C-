#include <iostream>
#include<math.h>
using namespace std;
int main(){
    long long n,mang[1000],kt[1000]={0};
    cin>>n;
    long long dem,k=0;
    for(int i = 2; i <= n; i++){
    	for(int j=2;j<=i;j++){
        dem = 0;
        while(i % j == 0){
            dem++;
            i /= j;
		    }
          if(dem>=kt[j]) kt[j]=dem;
        }
      }
     long long s=1;
     for(int i=2;i<=n;i++){
       s=s*pow(i,kt[i]);
     }
     cout<<s<<endl;
  return 0;
}

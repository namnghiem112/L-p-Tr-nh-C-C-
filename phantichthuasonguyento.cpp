#include <iostream>
#include<math.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,mang[1000],kt[1000]={0};
    cin>>n;
    long long dem,max=0,k=0;
    for(int i = 2; i <= n; i++){
    	for(int j=2;j<=i;j++){
        dem = 0;
        while(i % j == 0){
            dem++;
            i /= j;
		  }
		mang[k]=j;
		if(dem>=kt[mang[k]]) {
			kt[mang[k]]=dem;
	    }
      k++;
		}
  }
     long long s=1;
     for(int i=0;i<k;i++){
       cout<<mang[i];
     }
     cout<<s<<endl;
  } 
  return 0;
}

#include<stdio.h>
#include<math.h>
long long songuyento(long long n){
  if(n==1) return 0;
  for(long i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  return 1;
}
int main(){
  long long n,mang[100][100],dem=0,max=0,k=0;
  scanf("%lld",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%lld",&mang[i][j]);
    }
  }
  for(int i=0;i<n;i++){
    dem=0;
    for(int j=0;j<n;j++){
      if(songuyento(mang[i][j])==1){
        dem++;
      }
    }
    if(dem>max){ max=dem;}
  }
  for(int i=0;i<n;i++)
  { k=0;
    for(int j=0;j<n;j++){
      if(songuyento(mang[i][j])==1) k++; 
      if(k==max) { printf("%d\n",i+1);
      }
    }
  }
  
  return 0;
}
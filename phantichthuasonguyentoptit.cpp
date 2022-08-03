#include<stdio.h>
#include<math.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  int n,dem;
  scanf("%d",&n);
  printf("%d = ",n);
  for(int i=2;i<=n;i++){
    dem=0;
    while(n%i==0){
      dem++;
      n/=i;
    }
    if(dem){
      if(dem>0) printf("%d^%d",i,dem);
      else printf("%d",i);
      if(n>i) printf(" * ");
    }
  }
  printf("\n");
  }
  return 0;
}
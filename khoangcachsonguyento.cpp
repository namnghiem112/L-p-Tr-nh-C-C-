#include<stdio.h>
#include<math.h>
int kiemtra(int n){
  if(n<2) return 0;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  return 1;
}
int main(){
  int a,b,mang[1000];
  scanf("%d%d",&a,&b);
  int dem=0;
  int i=2;
  while(dem!=a+1){
    if(kiemtra(i)==1){
      mang[dem]=i;
      dem++;
    }
    i++;
  }
  for(int i=0;i<dem;i++){
    printf("%d ",b);
    b+=mang[i];
  }
}

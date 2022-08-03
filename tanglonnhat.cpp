#include<stdio.h>
int main(){
  int t,m=1;
  scanf("%d",&t);
  while(t--){
  int n,mang[100],dem=1,max=0,k=1,k1=1,p;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&mang[i]);
  }
  for(int i=0;i<n-1;i++){
    if(mang[i]<mang[i+1]) dem++;
    if(mang[i]>=mang[i+1]) dem=1;
    if(dem>max) max=dem;
  }
  printf("Test %d:\n",m);
  m++;
  printf("%d\n",max);
  for(int i=0;i<n-1;i++){
    if(mang[i]<mang[i+1]) k++;
    if(k==max){
      p=k;
      while(k1<=k){
        printf("%d ",mang[i-p+2]);
        k1++;
        p--;
        if(k1==k+1) printf("\n");
      }
    }
    if(mang[i+1]>=mang[i+2]) k=1;k1=1;
  }
  }
  return 0;
}
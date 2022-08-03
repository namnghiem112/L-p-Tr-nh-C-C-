#include<stdio.h>
int main(){
  int n,mang[100],k,x;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&mang[i]);
  }
  printf("Buoc 0: %d\n",mang[0]);
  for(int i=1;i<n;i++){
    x=mang[i];
    k=i;
    while(k>0 && x<mang[k-1]){
      mang[k]=mang[k-1];
      k--;
    }
    mang[k]=x;
    printf("Buoc %d: ",i);
    for(int j=0;j<=i;j++){
      printf("%d ",mang[j]);
    }
    printf("\n");
  }
}

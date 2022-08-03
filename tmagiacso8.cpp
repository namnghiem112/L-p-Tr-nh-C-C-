#include<stdio.h>
int main(){
  int n,dem=1,mang[100][100],temp;;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      mang[i][j]=dem++;
    }
  }
  for(int i=0;i<n;i++){
    if(i%2==1){
      for(int j=0;j<=i;j++){
        for(int k=j+1;k<=i;k++){
          if(mang[i][j]<mang[i][k]){
            temp=mang[i][j];
            mang[i][j]=mang[i][k];
            mang[i][k]=temp;
          }
        }
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(mang[i][j]!=0){
      printf("%d ",mang[i][j]);
    }
  }
  printf("\n");
  } 
  return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
  int mang[100][100],hang,cot,dem=1,k,p;
  scanf("%d%d",&hang,&cot);
  for(int i=cot-1;i>=0;i--){
    mang[0][i]=dem++;
  }
  for(int i=1;i<hang;i++){
    k=1;
    for(int j=cot-i-1;j>=0;j--){
      mang[i][j]=k++;
    }
  }
  for(int i=1;i<hang;i++){
    p=2;
    for(int j=cot-i;j<cot;j++){
      mang[i][j]=p++;
    }
  }
  for(int i=0;i<hang;i++){
    for(int j=0;j<cot;j++){
      printf("%d",mang[i][j]);
    }
    printf("\n");
  }
  return 0;
}
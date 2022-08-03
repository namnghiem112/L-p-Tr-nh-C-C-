#include<stdio.h>
#include<math.h>
int main(){
  int mang[100][100],dem=1,k,hang,cot,j;
  scanf("%d%d",&hang,&cot);
  for(int i=0;i<cot;i++){
    mang[0][i]=dem++;
  }
  for(int i=1;i<hang;i++){
    for(int j=0;j<cot-i;j++){
      mang[i][j]=mang[i-1][j]+1;
    }
    k=cot-1;
    for(int j=cot-i;j<=cot-1;j++){
      mang[i][j]=k--;
    }
    if(i>=cot) {
      mang[i][0]=mang[i-1][0]+1;
      for(int j=1;j<cot;j++){
        mang[i][j]=mang[i-1][j]+1;
      }
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
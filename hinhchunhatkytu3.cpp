#include<stdio.h>
int main(){
  int hang,cot,mang[100][100],dem=1;
  scanf("%d%d",&hang,&cot);
  for(int i=0;i<cot;i++){
    mang[0][i]=dem++;
  }
  for(int i=1;i<hang;i++){
    for(int j=0;j<cot-i;j++){
      mang[i][j]=mang[i-1][j]+1;
    }
    for(int j=cot-i;j<cot;j++){
      mang[i][j]=mang[i][j-1];
    }
    if(i>=cot) {
      mang[i][0]=mang[i-1][0];
      for(int j=1;j<cot;j++){
        mang[i][j]=mang[i][j-1];
      }
    }
  }
  for(int i=0;i<hang;i++){
    for(int j=0;j<cot;j++){
      printf("%c",mang[i][j]+63);
    }
    printf("\n");
  }
  return 0;
}
#include<stdio.h>
int main(){
  int hang,cot,mang[100][100],dem=65,k;
  scanf("%d%d",&hang,&cot);
  for(int i=0;i<cot;i++){
    mang[0][i]=dem++;
  }
  for(int i=1;i<hang;i++){
    for(int j=0;j<cot-i;j++){
      mang[i][j]=mang[i-1][j]+1;
    }
    k=65;
    for(int j=cot-1;j>=cot-i;j--){
      mang[i][j]=k++;
    }
    if(i>cot){
      mang[0][i]=mang[0][i-1]+1;
    }
  }
  for(int i=0;i<hang;i++){
    for(int j=0;j<cot;j++){
      printf("%c",mang[i][j]);
    }
    printf("\n");
  }
  return 0;
}
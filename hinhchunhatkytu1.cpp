#include<stdio.h>
int main(){
  int hang,cot,mang[100][100],max;
  scanf("%d%d",&hang,&cot);
  max=hang;
  if(cot>max) {max=cot;}
  int k=max;
  for(int i=0;i<hang;i++){
    for(int j=0;j<=i;j++){
      mang[i][j]=max--;
    }
    max=k;
    for(int j=i+1;j<cot;j++){
      mang[i][j]=mang[i][j-1];
    }
  }
  for(int i=0;i<hang;i++){
    for(int j=0;j<cot;j++){
      printf("%c",mang[i][j]+96);
    }
    printf("\n");
  }
  return 0;
}


#include<stdio.h>
#include<math.h>
int main(){
  int hang,cot,mang[100][100],dem=1,k=1,p=2;
  scanf("%d%d",&hang,&cot);
  for(int i=0;i<cot;i++){
    mang[0][i]=dem++;
  }
  for(int i=1;i<hang;i++){
    k=1;
    for(int j=i;j>=0;j--){
      mang[i][j]=k++;
    }
  }
  for(int i=1;i<hang;i++){
    p=2;
    for(int j=i+1;j<cot;j++){
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
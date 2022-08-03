#include<stdio.h>
#include<math.h>
int main(){
  int t,k=1;
  scanf("%d",&t);
  while(t--){
  int hang,cot,mang1[100][100],mang2[100][100],mang3[100][100];
  scanf("%d%d",&hang,&cot);
  for(int i=0;i<hang;i++){
    for(int j=0;j<cot;j++){
      scanf("%d",&mang1[i][j]);
    }
  }
  printf("Test %d:\n",k);
  k++;
  for(int i=0;i<hang;i++){
    for(int j=0;j<cot;j++){
      mang2[j][i]=mang1[i][j];
    }
  }
  for(int i=0;i<hang;i++){
    for(int j=0;j<hang;j++){
      mang3[i][j]=0;
      for(int k=0;k<cot;k++){
        mang3[i][j]+=mang1[i][k]*mang2[k][j];
      }
    }
  }
  for(int i=0;i<hang;i++){
    for(int j=0;j<hang;j++){
      printf("%d ",mang3[i][j]);
    }
    printf("\n");
  }
  }
  return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
  int mang[100][100],n,dem=1,k=0,fibo[500];
  scanf("%d",&n);
  fibo[1] = 0;
    fibo[2] = 1;
    fibo[3] = 1;
    for (int i = 4 ; i <= n*n; i++ )
        {
            fibo[i] = fibo[i-1]+fibo[i-2];
        }
  for(int k=0;k<=(n/2)-1;k++){
  for(int i=k;i<n-k;i++){
    mang[k][i]=fibo[dem++];
  }
  for(int i=k+1;i<n-k;i++){
    mang[i][n-1-k]=fibo[dem++];
  }
  for(int i=n-2-k;i>=k;i--){
    mang[n-1-k][i]=fibo[dem++];
  }
  for(int i=n-2-k;i>k;i--){
    mang[i][k]=fibo[dem++];
  }
  }
  if (n % 2 != 0) mang[n/2][n/2] = fibo[dem++];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d ",mang[i][j]);
    }
    printf("\n");
  }
  return 0;
}

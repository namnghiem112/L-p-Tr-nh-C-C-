#include<stdio.h>
#include<math.h>
int songuyento(int n){
  if(n==1) return 0;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  return 1;
}
int main(){
  int n,p,kt[200]={0};
  scanf("%d",&n);
  while(n!=0){
    p=n%10;
    kt[p]++;
    n/=10;
  }
  printf("%d \n",kt[p]);
  return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
  int n,p,sum=0,i;
  scanf("%d",&n);
  int n1=n;
  while(n!=0){
    p=n%10;
    int s=1;
    for(i=1;i<=p;i++){
      s=s*i;
    }
    sum=sum+s;
    n/=10;
  }
  if(n1==sum){
    printf("1");
  } else printf("0");
  return 0;
}
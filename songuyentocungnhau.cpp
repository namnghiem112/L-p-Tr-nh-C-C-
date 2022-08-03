#include<stdio.h>
#include<math.h>
long long ucln(long long a,long long b){
  if(a==0||b==0) return a+b;
  while(a!=b){
    if(a>b){
      a=a-b;
    } else { b=b-a;}
  } return a;
}
int main(){
  long long a,b;
  scanf("%lld%lld",&a,&b);
  if(a>2 && b>a && b<100){
  for(long long i=a;i<=b;i++){
    for(long long j=i+1;j<=b;j++){
      if(ucln(i,j)==1){
        printf("(%lld,%lld)",i,j);
        printf("\n");
      }
    }
  }
}
  return 0;
}
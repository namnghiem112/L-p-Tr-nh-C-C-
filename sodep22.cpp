#include<stdio.h>
#include<math.h>
long long sodep(long long n){
  long long n1=n,p,s=0,s1=0;
  while(n1!=0){
    p=n1%10;
    s=s+p;
    s1=s1*10+p;
    n1/=10;
  }
  if(n==s1 && s%10==0) return 1;
  return 0;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  long long n,dem=0;
  scanf("%lld",&n);
  for(long long i=pow(10,n-1);i<=pow(10,n)-1;i++){
    if(sodep(i)==1) dem++;
  }
  printf("%lld\n",dem);
  }
  return 0;
}
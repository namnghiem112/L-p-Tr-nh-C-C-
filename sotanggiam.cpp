#include<stdio.h>
#include<math.h>
long long songuyento(long long n)
{
  if(n==0||n==1) return 0;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  return 1;
}
long long sotanggiam(long long n){
  long long p1,p2,dem2=0,p,s=0,dem1=0,k=0;
  while(n!=0){
    p1=n%10;
    p2=(n/10)%10;
    n/=10;
    k++;
    if(p1>p2) dem1++;
    if(p1<p2) dem2++;
  }
  p=k-1;
  if(p==dem1 || p==dem2) return 1;
  return 0;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  long long n,dem=0;
  scanf("%lld",&n);
  int p1=pow(10,n-1);
  int p2=pow(10,n);
  for(int i=p1;i<p2;i++){
    if(sotanggiam(i)==1 && songuyento(i)==1) dem++;
  }
  printf("%lld\n",dem);
  }
}
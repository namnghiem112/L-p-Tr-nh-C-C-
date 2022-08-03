#include<stdio.h>
#include<math.h>
long long kiemtra(long long n){
  long long p,s=0,n1,dem=0,k;
  n1=n;
  while(n1!=0){
    n1/=10;
    dem++;
  }
  dem=dem-1;
  while(dem+1!=0){
    k=pow(10,dem);
    p=n/k;
    if(p!=0 && p!=1 && p!=8 && p!=9) return 0;
    if(p==0 || p==8 || p==9) p=0;
    if(p==1) p=1;
    s=s*10+p;
    n%=k;
    dem--;
  }
  return s;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  long long n;
  scanf("%lld",&n);
  if(kiemtra(n)==0) printf("INVALID\n");
  else printf("%lld\n",kiemtra(n));
  }
  return 0;
}
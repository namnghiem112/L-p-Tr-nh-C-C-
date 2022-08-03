#include<stdio.h>
#include<math.h>
long long m,n;
int nto(int x){
  if(x<2) return 0;
  for(int i=2;i<=sqrt(x);i++)
    if(x%i==0) return 0;
  return 1;
}
int ktra(int x){
  int tong=0;
  int cs=1;
  while(x>0){
   int t=x%10;
    if(t!=2 && t!=3 && t!=5 && t!=7 ) cs=0;
    tong=tong+t;
    x=x/10;
  }
  if(nto(tong) && cs==1) return 1;
  return 0;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  scanf("%lld%lld",&m,&n);
  int dem=0;
  for(int i=m;i<=n;i++){
    if(nto(i) && ktra(i)) dem++;
  }
  printf("%d\n",dem);
  }
  return 0;
}
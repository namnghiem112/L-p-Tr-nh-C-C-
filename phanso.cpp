#include<stdio.h>
#include<math.h>
int uoc(int n,int m){
  if(n==0 || m==0) return m+n;
  while(m!=n){
    if(m>n) m=m-n;
    else n-=m;
  }
  return m;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int a,b,c,d,k,q;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int tu=pow(a*d+b*c,2);
	int mau=pow(b*d,2);
	int m=uoc(tu,mau);
	k=tu/m;
	q=mau/m;
	printf("%d/%d ",k,q);
	int tu1=a*c*k;
	int mau1=b*d*q;
	int n=uoc(tu1,mau1);
	printf("%d/%d\n",tu1/n,mau1/n);
}
}

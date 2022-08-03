#include<stdio.h>
#include<math.h>
int tamgiacvuong(int a,int b,int c){
  if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) return 1;
  return 0;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  long long n,mang[5000],dem=0;
  scanf("%lld",&n);
  for(int i=0;i<n;i++){
    scanf("%lld",&mang[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
      if(tamgiacvuong(mang[i],mang[j],mang[k])==1) dem++;
      if(dem!=0) printf("YES\n");break;
      }
      if(dem!=0) break;
    }
    if(dem!=0) break;
  }
  if(dem==0) printf("NO\n");
  }
  return 0;
}
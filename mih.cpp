#include<stdio.h>
#include<math.h>
int songuyento(int n){
  if(n<2) return 0;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  return 1;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  int n,kt[100]={0},k=1,max[100]={0};
  long long s=1;
  scanf("%d",&n);
  for(int i=2;i<=n;i++){
    for(int j=2;j<=i;j++){
      int dem=0;
      while(i%j==0){
        dem++;
        i/=j;
      }
      if(dem>max[j]) max[j]=dem;
      if(dem>=1 && dem>=max[j]) kt[j]=dem;
    }
  }
  for(int i=2;i<=n;i++){
    if(songuyento(i)) s=s*pow(i,kt[i]);
  }
  printf("%lld\n",s);
  }
  return 0;
}
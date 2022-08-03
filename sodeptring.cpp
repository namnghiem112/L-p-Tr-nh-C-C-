#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
  long long t;
  scanf("%lld",&t);
  while(t--){
  char n[509];
  long long dem=0,k=0,j,p=0;
  scanf("%s",n);
  while(n[j]!='\0'){
    dem++;
    j++;
  }
  for(long long i=0;i<strlen(n);i++){
    if(n[i]%2==0) k++;
  }
  for( long long i=0;i<strlen(n);i++){
    if(n[i]==n[dem-1-i] && k==dem){
     p++;
    } 
  }
  if(p==dem && p==k){
    printf("YES");
  } else printf("NO");
  printf("\n");
  }
  return 0;
}
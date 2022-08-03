#include<stdio.h>
int main(){
  int n,s[100],temp,dem=1;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&s[i]);
  }
  for(int i=n-1;i>=0;i--){
    if(s[i]>s[i-1]){
      temp=s[i];
      s[i]=s[i-1];
      s[i-1]=temp;
    }
  }
  for(int i=n-1;i>=0;i--) printf("%d ",s[i]);
  printf("\n");
  return 0;
}
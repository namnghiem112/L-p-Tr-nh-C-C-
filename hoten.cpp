#include<stdio.h>
#include<string.h>
int main(){
  int t;
  scanf("%d ",&t);
  while(t--){
  char s[205];
  gets(s);
  char *p;
  const char* delim = " ";
  char mang[100][100];
  for(int i=0;i<strlen(s);i++){
    if(s[i]>=65 && s[i]<=90) s[i]=s[i]+32;
  }
  int j=0,dem=0,dem1=0;
  int n=strlen(s)-2;
  if(s[0]!=' ') s[0]-=32; dem++;
  for(int i=0;i<n;i++){
    if(s[i]==' ' && s[i+1]!=' ') {
    s[i+1]=s[i+1]-32;
    dem++;
  }
  }
  for(p=strtok(s,delim);p!=NULL;p=strtok(NULL,delim)){
    strcpy(mang[j],p);
    dem1++;
    if(dem1<dem) printf("%s ",mang[j]);
    if(dem1==dem) printf("%s",mang[j]);
    j++;
  }
  printf("\n");
  }
  return 0;
  }
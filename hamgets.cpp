#include<stdio.h>
#include<string.h>
#define pt 100
int main(){
  char s1[100];
  char s2[100];
  int kt[pt]={0};
  gets(s1);
  gets(s2);
  for(int i=0;i<strlen(s1);i++){
    kt[s1[i]]++;
  }
  for(int i=0;i<strlen(s2);i++){
    kt[s2[i]]++;
  }
  for(int i=0;i<strlen(s1);i++){
    if(kt[s1[i]]==1){
      printf("%s",s1);
    }
  }
  return 0;
}
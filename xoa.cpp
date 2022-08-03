#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void xoa(char *src,int pos,int len){
  int size=strlen(src);
  for(int i=pos;i<=size-len;i++){
    src[i]=src[i+len];
  }
}
void chuyen(char s1[],char s[]){
	strcat(s1,s);
	for(int i=0;i<strlen(s1);i++){
  	if(s1[i]>=65 && s1[i]<=90) s1[i]+=32;
  }
}
void xoa_chuoi2_khoi_chuoi1( char *src,char *chuoi2){
  int len=strlen(chuoi2);
  char s1[100]="",s2[100]="";
  chuyen(s1,src);
  chuyen(s2,chuoi2);
  for(int i=0;src[i]!='\0';i++){
    if(strstr(&s1[i],s2)==&s1[i]){
      xoa(src,i,len);
      i--;
    }
  }
}
int main(){
  int t,k=1;
  scanf("%d",&t);
  while(t--){
  scanf("\n");
  char chuoi1[1000];
  char chuoi2[100];
  gets(chuoi1);
  gets(chuoi2);
  xoa_chuoi2_khoi_chuoi1(chuoi1,chuoi2);
  printf("Test %d: ",k);
  k++;
  printf("%s",chuoi1);
  printf("\n");
  }
  return 0;
}

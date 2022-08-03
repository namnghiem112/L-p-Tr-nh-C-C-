#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
  char s[100];
  int s1[100];
  gets(s);
  int n=strlen(s);
  for(int i=0;i<n;i++){
    if(s[i]=='I') s1[i]=1;
    if(s[i]=='V') s1[i]=5;
    if(s[i]=='X') s1[i]=10;
    if(s[i]=='L') s1[i]=50;
    if(s[i]=='C') s1[i]=100;
    if(s[i]=='D') s1[i]=500;
    if(s[i]=='M') s1[i]=1000;
  }
  int sum=0;
  for(int i=0;i<n-1;i++){
    if(s1[i]<s1[i+1]) s1[i]*=-1; 
  }
  for(int i=0;i<n;i++) sum+=s1[i];
  	printf("%d\n",sum);
}
return 0;
}

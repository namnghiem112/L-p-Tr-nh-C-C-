#include<stdio.h>
#include<string.h>
int main(){
	char s[10000];
	char s1[10000];
	gets(s);
	gets(s1);
	int n=strlen(s1);
	char temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s1[i]<s1[j]){
				temp=s1[i];
				s1[i]=s1[j];
				s1[j]=temp;
			}
		}
	}
	int k=0;
  	for(int i=0;i<strlen(s);){
    if(s[i]>=s1[k]) i++;
    else if(s[i]<s1[k]){
    	s[i]=s1[k];
    	i++;
    	k++;
	}
  }
  for(int i=0;i<strlen(s);i++) printf("%c",s[i]);
}

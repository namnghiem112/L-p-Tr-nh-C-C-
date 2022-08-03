#include<stdio.h>
#include<string.h>
int main() {  
	char s1[1000],s2[1000];
	gets(s1);
	gets(s2);
	int n;
	scanf("%d",&n);
	if(n<=strlen(s1)){
		for(int i=0;i<strlen(s1);i++){
			if(i==n-1){
				for(int j=0;j<strlen(s2);j++) printf("%c",s2[j]);
			}
			printf("%c",s1[i]);
		}
	}
	else{
		for(int i=0;i<strlen(s1);i++) {printf("%c",s1[i]);}
		for(int j=0;j<strlen(s2);j++) {printf("%c",s2[j]);}
	}
	return 0;
}
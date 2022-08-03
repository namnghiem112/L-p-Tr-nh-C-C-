#include<stdio.h>
#include<string.h>
int kiemtra(char s[200]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]!='4' && s[i]!='7') return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
	char s[200];
	gets(s);
	if(kiemtra(s)) printf("YES\n");
	else printf("NO\n");
}
return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
	char ten[1000];
	int kt[1000]={};
	gets(ten);
	for(int i=0;i<strlen(ten);i++){
		kt[ten[i]]++;
	}
	for(int i=0;i<strlen(ten);i++){
		if(kt[ten[i]]!=0){
		printf("%d%c",kt[ten[i]],ten[i]);
		}
		kt[ten[i]]=0;
	}
	printf("\n");
}
	return 0;
}

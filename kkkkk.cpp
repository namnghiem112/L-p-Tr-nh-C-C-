#include<stdio.h>
#include<string.h>
char s[10000];
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
	gets(s);
	char t[10000];
	int so[1000];
	int k=0,k1=0,sum=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='A'&& s[i]<='Z'){
			t[k]=s[i];
			k++;
		}
		if(s[i]>='0'&& s[i]<='9'){
			so[k1]=s[i]-'0';
			sum+=so[k1];
			k1++;
		}
	}
	char temp;
	for(int i=0;i<k;i++){
		for(int j=i+1;j<k;j++){
			if(t[i]>t[j]){
				temp=t[i];
				t[i]=t[j];
				t[j]=temp;
			}
		}
	}
	for(int i=0;i<k;i++){
		printf("%c",t[i]);
	}
	printf("%d\n",sum);
	}
}

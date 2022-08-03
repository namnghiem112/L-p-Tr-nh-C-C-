#include<stdio.h>
#include<string.h>
int main(){
	char ten[100];
	int k;
	gets(ten);
	scanf("%d",&k);
	char *p;
	char *delim=" ";
	char mang[100][100];
	int n=0;
	switch(k){
		case 1:{
			for(p=strtok(ten,delim);p!=NULL;p=strtok(NULL,delim)){
				strcpy(mang[n],p);
				n++;
			}
			printf("%s ",mang[n-1]);
			for(int i=0;i<n-1;i++){
				printf("%s ",mang[i]);
			}
			break;
		}
		case 2:{
			for(p=strtok(ten,delim);p!=NULL;p=strtok(NULL,delim)){
				strcpy(mang[n],p);
				n++;
			}
			for(int i=1;i<n;i++){
				printf("%s ",mang[i]);
			}
			printf("%s ",mang[0]);
			break;
		}
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
	char A[10000];
	char B[10000];
	char C[10]={0};
	gets(A);
	gets(B);
	for(int i=0;i<strlen(B);i++){
		int a=B[i]-48;
		C[a]++;
	}
	int k=9;
	for(int i=0;i<strlen(A);i++){
		while(C[k]==0) k--;
		if(k==-1) break;
		if(A[i]-48<k){
			A[i]=48+k;
			C[k]--;
		}	
	}
	printf("%s",A);
}

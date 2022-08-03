#include<stdio.h>
int main(){
	int mang[100][100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&mang[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 || i==n-1 || j==0){
				printf("%d ",mang[i][j]);
			} else if(j==n-1){
				printf("%d",mang[i][j]);
			} else printf("  ");
		}
		printf("\n");
	}
}

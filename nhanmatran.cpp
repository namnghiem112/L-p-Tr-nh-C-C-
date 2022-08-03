#include<stdio.h>
int main(){
	int mang1[100][100],mang2[100][100],mang3[100][100],m,n,p;
	scanf("%d%d%d",&n,&m,&p);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&mang1[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			scanf("%d",&mang2[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			mang3[i][j]=0;
			for(int k=0;k<m;k++){
				mang3[i][j]+=mang1[i][k]*mang2[k][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			printf("%d ",mang3[i][j]);
		}
		printf("\n");
	}
}

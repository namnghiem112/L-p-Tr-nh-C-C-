#include <stdio.h>

int main(){
	int A[1000],B[1000],m,n, C[1000]= {0}, D[1000];
	scanf("%d%d",&m,&n);
	for(int i = 0; i < m; i++){
		scanf("%d",&A[i]);
		C[A[i]]++;
	}
	for(int i = 0; i < n; i++){
		scanf("%d",&B[i]);
		C[B[i]]++;
	}
	int k = 0;
	for(int i = 0; i < 1000; i++){
		if(C[i] > 1){
			D[k++] = i;
		}
	}
	for(int i = 0; i < k; i++){
		printf("%d ",D[i]);
	}
}

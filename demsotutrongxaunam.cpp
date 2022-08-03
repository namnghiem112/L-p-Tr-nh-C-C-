#include<stdio.h>
#include<string.h>

int main(){
	int t; 
	scanf("%d ", &t) ;
	while(t--){
		char string[205] ;
		int dem=0 ;
		fgets(string, sizeof(string), stdin) ;
		int length = strlen(string)-1 ;
		for(int i=0;i<length-1;i++){ // hàm fgets cuối nó sẽ là \n
			if(string[i]==' ' && string[i+1] !=' ' ) dem++ ;
		}
		printf("%d\n", dem+1) ;	
	}
	return 0 ;
}
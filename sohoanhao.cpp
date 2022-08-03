#include<stdio.h>
#include<math.h>
void sohoanhao(int n){
	int s=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0) s=s+i+n/i;
	}
	s-=n;
	if(sqrt(n)==(int)sqrt(n)) s-=sqrt(n);
	if(s==n){
		printf("%d ", n);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i=2;i<=n;i+=2){
		sohoanhao(i);
	}
	return 0;
}
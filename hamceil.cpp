#include<math.h>
#include<stdio.h>

int main () {
	long n, m;
	scanf("%ld%ld", &m, &n);
	int count = 0;
	for(long i=ceil(sqrt(m)); i<=sqrt(n); i++){
		count++;
	}
	printf("%d\n", count);
	for(long i=ceil(sqrt(m)); i<=sqrt(n); i++){
		printf("%ld\n", i*i);
	}
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>
void tong(char s1[1001],char s2[1001]){
	long long a[1001],b[1001],i,j,n;
  	char c[1001];
	long long d1=strlen(s1),d2=strlen(s2);
		if(d1>d2){
			n=d1;
			for(i=0;i<n;i++){
				a[i]=s1[i]-'0';
				if(i<d1-d2){
					b[i]=0;
				}else{
					b[i]=s2[i-n+d2]-'0';
				}
			}
		}else{
			n=d2;
			for(i=0;i<n;i++){
				a[i]=s2[i]-'0';
				if(i<d2-d1){
					b[i]=0;
				}else{
					b[i]=s1[i-n+d1]-'0';
				}
			}
		}
    long long nho=0,k=0;
		for(i=n-1;i>=0;i--){
			int x=a[i]+b[i]+nho;
			nho=x/10;
			c[k]=(x%10)+48;
      		k++;
		}
    if(nho!=0) {
	c[k]=nho+48;
	k++;
	}
    for(i=k-1;i>=0;i--){
      printf("%c",c[i]);
    	}
	}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s1[1001],s2[1001];
		gets(s1);
    	gets(s2);
		tong(s1,s2);	
		printf("\n");
  }
return 0;
}

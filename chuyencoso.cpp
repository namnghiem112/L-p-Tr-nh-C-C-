#include<stdio.h>
#include<string.h>

const char x[]={ // mang doi chieu
		'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H',
		'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
	};

int main(){
	int n, k, b;
	char s[100];
	scanf("%d",&n); 
	while(n--){ 
		scanf("%d%d",&k, &b); 
		if(k == 0){
			printf("0\n");			
		} 
    else{
			int i = 0;
			while(k){ 
				int temp = k%b; 
				k/= b;
				
				s[i++]= x[temp]; 
			}
			s[i]='\0';
			for (int i = strlen(s) - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
        printf("\n");
		}			
	}
	return 0;
}

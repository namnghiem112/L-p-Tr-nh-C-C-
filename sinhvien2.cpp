#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct sv {
	char ten[100];
	int dung, sub;
};
int sosanh(char s1[], char s2[]){
	int k1 = 0, k2 = 0;
	char res1[100][100],res2[100][100];
	char *p;
	for(p = strtok(s1," "); p != NULL; p = strtok(NULL," ")){
		strcpy(res1[k1++],p);
	}
	for(p = strtok(s2," "); p != NULL; p = strtok(NULL," ")){
		strcpy(res2[k2++],p);
	}
	int min = k1;
	if(k1 > k2) min = k2;
	for(int i = 0; i < min; i++ ){
		if(strcmp(res1[i],res2[i]) == 1){
			return 0;
		}if(strcmp(res1[i],res2[i]) == -1) return 1;
	}
	if(k1 <= k2 ) return 1;
	else return 0;
}
int main(){
	struct sv ds[1000],tmp;
	int n;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		scanf("\n");
		gets(ds[i].ten);
		scanf("%d %d",&ds[i].dung,&ds[i].sub);
	}
	for(int i = 1; i < n; i++){
		if(ds[i].dung < ds[i+1].dung){
			tmp = ds[i];
			ds[i] = ds[i + 1];
			ds[i+1] = tmp;
		}if(ds[i].dung == ds[i+1].dung && ds[i].sub > ds[i+1].sub){
			tmp = ds[i];
			ds[i] = ds[i + 1];
			ds[i+1] = tmp;
		}
		if(ds[i].dung == ds[i+1].dung && ds[i].sub == ds[i+1].sub){
			char s1[100],s2[100];
			strcpy(s1,ds[i].ten);
			strcpy(s2,ds[i+1].ten);
			if(!sosanh(s1,s2)){
				tmp = ds[i];
				ds[i] = ds[i + 1];
				ds[i+1] = tmp;
			}
		}
	}
		for(int i = 1; i <= n; i++){
			printf("%s",ds[i].ten);
			printf(" %d %d\n",ds[i].dung,ds[i].sub);
		}
}

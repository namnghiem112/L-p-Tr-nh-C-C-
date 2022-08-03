#include<stdio.h>
#include<string.h>
struct danhsach{
	char tu[100];
};
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
	struct danhsach list[100];
	int n;
	scanf("%d",&n);
	scanf(" ");
	char s[100];
	for(int i=0;i<n;i++){
		scanf("%s",s);
		strcpy(list[i].tu,s);
	}
	char t[100];
	for(int i=0;i<n;i++){
		char x[100],y[100];
		for(int j=i+1;j<n;j++){
			strcpy(x,list[i].tu);
			strcat(x,list[j].tu);
			strcpy(y,list[j].tu);
			strcat(y,list[i].tu);
			if(strcmp(x,y)>0){
				strcpy(t,list[i].tu);
				strcpy(list[i].tu,list[j].tu);
				strcpy(list[j].tu,t);
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s",list[i].tu);
	}
	printf("\n");
  }
	return 0;
}

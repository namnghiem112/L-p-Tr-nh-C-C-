#include<stdio.h>
#include<string.h>
struct danhsach{
	char tu[205];
	int dem;
};
int demtu(char s[]){
	int dem=0;
	if(s[0]!=32) dem++;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==32 && s[i+1]!=32){
			dem++;
		}
	}
	return dem;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	scanf("\n");
	struct danhsach list[205];
	struct danhsach list1[205];
	char chuoi1[205],chuoi2[205];
	gets(chuoi1);
	gets(chuoi2);
	int dem1=demtu(chuoi1);
	int size=0;
	char *p;
	for(p=strtok(chuoi1," ");p!=NULL;p=strtok(NULL," ")){
		int test=0;
		for(int i=0;i<size;i++){
			if(strcmp(list[i].tu,p)==0){
				test=1;
			}
		}
		if(test==0){
			strcpy(list[size].tu,p);
			(size)++;
		}
	}
  for(int i=0;i<size;i++){
    printf("%s",list[i].tu);
  }
	int j=0;
	for(p=strtok(chuoi2," ");p!=NULL;p=strtok(NULL," ")){
		strcpy(list1[j].tu,p);
		j++;
	}
	int dem2=j;
	char *cpy;
	cpy="-1";
	for(int i=0;i<dem1;i++){
		for(int j=0;j<dem2;j++){
			if(strcmp(list[i].tu,list1[j].tu)==0){
				strcpy(list[i].tu,cpy);
			}
		}
	}
	struct danhsach list3[100];
	int k=0;
	for(int i=0;i<dem1;i++){
		if(strcmp(list[i].tu,cpy)!=0){
			strcpy(list3[k].tu,list[i].tu);
			k++;
		}
	}
  	char t[500];
    for (int i = 0; i< k; i++){
        for (int j = 0; j< k; j++){
            if (strcmp(list3[i].tu, list3[j].tu) < 0){
                strcpy(t, list3[i].tu);
                strcpy(list3[i].tu,list3[j].tu);
                strcpy(list3[j].tu,t);
            }
        }
    }
	for(int i=0;i<k;i++){
		printf("%s ",list3[i].tu);
	}
	printf("\n");
}
return 0;
}

#include<stdio.h>
#include<string.h>
struct danhsach{
	char tu[205];
	int check;
};
int dem(char s[]){
	int dem=0;
	if(s[0]!=32) dem++;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==32&&s[i+1]!=32) dem++;
	}
	return dem;
}
void tach(char *word1,struct danhsach *words,int *size){
    char *check ;
    const char *sep = " \n\t,.;:";
    for (check = strtok(word1, sep);check != NULL;check = strtok(NULL, sep)){
        int test = 0;
        for (int i = 0; i< *size; i++)
        if (strcmp(check, words[i].tu) == 0){
            test = 1;
        }
        if (test == 0)
        {
            strcpy(words[*size].tu, check);
            words[*size].check = 0;
            (*size) ++;
        }
    }
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
	int size=0;
	tach(chuoi1,list,&size);
	int dem1=dem(chuoi1);
	int j=0;
	char *p;
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
	char kq[205][205];
	int k=0;
	for(int i=0;i<dem1;i++){
		if(strcmp(list[i].tu,cpy)!=0){
				strcpy(kq[k],list[i].tu);
				k++; 
			}
		}
	for(int i=0;i<k;i++){
		printf("%s ",kq[i]);
	}
	printf("\n");
}
return 0;
}


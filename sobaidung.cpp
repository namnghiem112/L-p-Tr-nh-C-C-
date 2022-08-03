#include<stdio.h>
#include<string.h>
struct danhsach {
	char ten[100];
	int baidung;
	int baisub;
}P[100];
void chuyen(char s[100],char temp[100]){
	int n=strlen(s);
	int k=0;
	for(int i=0;i<n;i++){
		if(s[i]!=' '){
			temp[k]=s[i];
			k++;
		}
	}
}
int main(){
	struct danhsach list[100];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("\n");
		gets(list[i].ten);
		scanf("%d%d",&list[i].baidung,&list[i].baisub);
	}
	struct danhsach temp;
	char temp1[100][100];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(list[i].baidung<list[j].baidung){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
			else if(list[i].baidung==list[j].baidung){
				if(list[i].baisub>list[j].baisub){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
				} else if(list[i].baisub==list[j].baisub){
					chuyen(list[i].ten,temp1[i]);
					chuyen(list[j].ten,temp1[j]);
					if(strcmp(temp1[i],temp1[j])>0){
						temp=list[i];
						list[i]=list[j];
						list[j]=temp;
					}
				}
			} 
		}
	}
	for(int i=1;i<=n;i++){
		printf("%s %d %d\n",list[i].ten,list[i].baidung,list[i].baisub);
	}
}

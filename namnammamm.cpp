#include<stdio.h>
#include<string.h>
struct danhsach{
	char ten[100];
	long long baidung;
	long long baisub;
};
void chuyen(char s[100],char s1[100]){
	int k=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]!=' '){
			s1[k]=s[i];
			k++;
		}
	}
}
int main(){
	struct danhsach list[1009];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("\n");
		gets(list[i].ten);
		scanf("%lld%lld",&list[i].baidung,&list[i].baisub);
	}
	struct danhsach temp;
	char t[100][100];
	char temp1[100][100];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			chuyen(list[i].ten,t[i]);
			chuyen(list[j].ten,t[j]);
			if(list[i].baidung<list[j].baidung || list[i].baidung==list[j].baidung && list[i].baisub > list[j].baisub){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			} else if(list[i].baidung==list[j].baidung && list[i].baisub == list[j].baisub){
				if(strcmp(t[i],t[j])>0){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%s %lld %lld\n",list[i].ten,list[i].baidung,list[i].baisub);
	}
}

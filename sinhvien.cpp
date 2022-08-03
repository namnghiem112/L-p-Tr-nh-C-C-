#include<stdio.h>
#include<string.h>
struct danhsach{
	char ten[100];
	char masinhvien[100];
	char lop[100];
	double diem1;
	double diem2;
	double diem3;
};
void chuyen(char s[100],char s1[100]){
	int k=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]!=32){
			s1[k++]=s[i];
		}
	}
}
void nhapdssinhvien(struct danhsach list[],int n){
	for(int i=1;i<=n;i++){
	scanf("\n");
	gets(list[i].masinhvien);
	gets(list[i].ten);
	gets(list[i].lop);
	scanf("%lf%lf%lf",&list[i].diem1,&list[i].diem2,&list[i].diem3);
	}
}
void sapxepsinhvien(struct danhsach list[],int n){
	struct danhsach temp;
  	char t[100][100];
	for(int i=1;i<=n;i++){
    chuyen(list[i].ten,t[i]);
		for(int j=i+1;j<=n;j++){
      chuyen(list[j].ten,t[j]);
			if(strcmp(t[i],t[j])>0){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
	printf("%s",t[1]);
}
int main(){
	struct danhsach list[100];
	int n;
  scanf("%d\n",&n);
  nhapdssinhvien(list,n);
  sapxepsinhvien(list,n);
  for(int i=1;i<=n;i++){
    printf("%d %s %s %s %.1lf %.1lf %.1lf\n",i,list[i].masinhvien,list[i].ten,list[i].lop,list[i].diem1,list[i].diem2,list[i].diem3);
  }
  return 0;
}

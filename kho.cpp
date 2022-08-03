#include<stdio.h>
#include<string.h>
struct sinhvien{
	char ten[100];
	char masinhvien[100];
	double diem1;
	double diem2;
	double diem3;
};
int main(){
	int n;
	scanf("%d",&n);
	struct sinhvien list[100];
	for(int i=1;i<=n;i++){
		scanf("\n");
		gets(list[i].ten);
		gets(list[i].masinhvien);
		scanf("%lf%lf%lf",&list[i].diem1,&list[i].diem2,&list[i].diem3);
	}
  	struct sinhvien temp;
  	for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
    if(strcmp(list[i].ten,list[j].ten)>0){
        temp=list[i];
        list[i]=list[j];
        list[j]=temp;
      }
    }
  }
  for(int i=1;i<=n;i++){
    printf("%s %s %.lf %.lf %.lf\n",list[i].ten,list[i].masinhvien,list[i].diem1,list[i].diem2,list[i].diem3);
  }
}

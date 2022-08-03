#include<stdio.h>
#include<string.h>
#include<math.h>
struct danhsach{
	char ten[100];
	char ngaysinh[100];
	double diem1;
	double diem2;
	double diem3;
	double max;
	int maso;
};
void swap(struct danhsach list[100],long long n){
	struct danhsach temp;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(list[i].max<list[j].max){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
}
int main(){
	struct danhsach list[100];
	long long t;
	scanf("%lld",&t);
	scanf("\n");
	for(int i=1;i<=t;i++){
		gets(list[i].ten);
		scanf("\n");
		gets(list[i].ngaysinh);
		scanf("\n");
		scanf("%lf\n%lf\n%lf\n",&list[i].diem1,&list[i].diem2,&list[i].diem3);		
		list[i].maso=i;
		list[i].max = list[i].diem1+list[i].diem2+list[i].diem3;
		scanf("\n");
	}
	swap(list,t);
	for(int i=1;i<=t;i++){
		printf("%d %s %s %.1lf\n",list[i].maso,list[i].ten,list[i].ngaysinh,list[i].max);
	}
	return 0;
}

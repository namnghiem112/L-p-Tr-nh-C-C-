#include<stdio.h>
#include<string.h>
struct danhsach{
	char ten[100];
	double diem1;
	double diem2;
	double diem3;
	double max;
	int maso;
};
void nhapdssinhvien(struct danhsach list[],int n){
	for(int i=1;i<=n;i++){
	scanf("\n%[^\n]s", list[i].ten);
	scanf("%lf%lf%lf",&list[i].diem1,&list[i].diem2,&list[i].diem3);
	}
}
void sapxepsinhvien(struct danhsach list[],int n){
	struct danhsach temp;
	for(int i=1;i<=n;i++){
		list[i].maso=i;
		list[i].max=list[i].diem1+list[i].diem2+list[i].diem3;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(list[i].max>list[j].max){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
}
int main(){
	struct danhsach list[100];
	int dem,soluongsv;
	for(int k=1;k<=3;k++){
		scanf("%d",&dem);
		switch(dem){
		case 1:{
			scanf("%d",&soluongsv);
			fflush(stdin);
			nhapdssinhvien(list,soluongsv);
			printf("%d\n",soluongsv);
			break;
		}
		case 2:{
			char tendoi[100];
			int macandoi;
			scanf("%d\n", &macandoi);
			scanf("\n%[^\n]s",tendoi);
			double a, b, c;
			scanf("%lf\n%lf\n%lf", &a, &b, &c);
			char copy[1000];
			strcpy(copy, list[macandoi].ten);
			strcpy(list[macandoi].ten, tendoi);
			strcpy(tendoi, copy);
			list[macandoi].diem1 = a;
			list[macandoi].diem2 = b;
			list[macandoi].diem3 = c;
			printf("%d\n", macandoi);
			break;
		}
		case 3:{
			sapxepsinhvien(list,soluongsv);
			for(int i=1;i<=soluongsv;i++){
				printf("%d %s %.1lf %.1lf %.1lf\n",list[i].maso,list[i].ten,list[i].diem1,list[i].diem2,list[i].diem3);
			}
			break;
		}
		default:{
		break; 
	}
}
}
  return 0;
}

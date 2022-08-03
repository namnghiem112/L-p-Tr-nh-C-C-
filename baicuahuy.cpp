#include<stdio.h>
#include<string.h>
struct danhsach {
	char ten[100];
	char masinhvien[100];
	char lop[100];
	char congty[100];
	char diachi[100];
	int maso;
};
int main(){
	struct danhsach list[100];
	int n;
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
		gets(list[i].masinhvien);
		gets(list[i].ten);
		gets(list[i].lop);
		gets(list[i].diachi);
		gets(list[i].congty);
		list[i].maso=i;
	}
	int t;
	scanf("%d\n",&t);
	struct danhsach list2[100];
	for(int i=1;i<=t;i++){
		gets(list2[i].congty);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=t;j++){
			if(strcmp(list[i].congty,list2[j].congty)==0){
				printf("%d %s %s %s %s %s\n",list[i].maso,list[i].masinhvien,list[i].ten,list[i].lop,list[i].diachi,list[i].congty);
			}
		}
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<math.h>
struct danhsach{
	char ten[1000];
	char nhomhang[1000];
	double giamua;
	double giaban;
	double loinhuan;
	int maso;
};
int main(){
	struct danhsach list[1000];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("\n");
		gets( list[i].ten);		
		gets(list[i].nhomhang);
		scanf("%lf%lf",&list[i].giamua,&list[i].giaban);
		list[i].loinhuan=list[i].giaban-list[i].giamua;
		list[i].maso=i;
	}
	struct danhsach temp;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(list[i].loinhuan<list[j].loinhuan){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d %s %s %.2lf\n",list[i].maso,list[i].ten,list[i].nhomhang,list[i].loinhuan);
	}
	return 0;
}

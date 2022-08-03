#include<iostream>
#include<string.h>
using namespace std;
struct danhsach{
	char ten[100];
};
int main(){
	struct danhsach list[100];
	char chuoi1[100],chuoi2[100];
	gets(chuoi1);
	gets(chuoi2);
	char *p;
	int n=1;
	for(p=strtok(chuoi1," ");p!=NULL;p=strtok(NULL," ")){
		strcpy(list[n].ten,p);
		n++;
	}
	for(int i=1;i<=n;i++){
		if(strcmp(list[i].ten,chuoi2)!=0){
			cout<<list[i].ten<<" ";
		}
	}
	return 0;
}

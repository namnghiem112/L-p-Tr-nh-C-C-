#include<stdio.h>
#include<string.h>
struct danhsach{
	char tu[500];
	int dem;
};
int xauthuannghich(char s[100]){
	int n=strlen(s);
	for(int i=0;i<n;i++){
		if(s[i]!=s[n-1-i]) return 0;
	}
	return 1;
}
int main(){
	struct danhsach list[500];
	int n=0;
	while(scanf("%s",s)!=-1){
		int test =0;
		for(int i=0;i<n;i++){
			if(strcmp(s,list[i].tu)==0){
				test=1;
				list[i].dem++;
			}
		}
		if(test==0 && xauthuannghich(s)==1){
			strcpy(list[n].tu,s);
			list[n].dem=1;
			n++;
		}
		for(int i=0;i<n;i++){
			if(strlen(list[i].tu)>max) max=strlen(list[i].tu);
		}
		for(int i=0;i<n;i++){
			if(strlen(list[i].tu)==max ) printf("%s %d\n",list[i].tu,list[i].dem);
		}
	}
	return 0;
}

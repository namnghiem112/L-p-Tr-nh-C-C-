#include<stdio.h>
#include<string.h>
struct danhsach{
	char tu[1000];
	int dem;
};
int xauthuannghich(char s[100]){
	int n=strlen(s);
	for(int i=0;i<n;i++){
		if(s[i]!=s[n-1-i]) return 0;
	}
	return 1;
}
int sosanh(char s1[100],char s2[100]){
	if(strlen(s1)>strlen(s2)) return 0;
	int kt;
	if(strlen(s1)==strlen(s2)){
		for(int i=0;i<strlen(s1);i++){
			kt=0;
			if(s1[i]<s2[i]){
				kt=1;
				break;
			}
		}
	}
	if(kt==0) return 0;
	return 1;
}
int main(){
	struct danhsach list[1000];
  	char s[100];
  	int max=0,n=0;
	while(scanf("%s",s)!=-1){
		int test =0;
		for(int i=0;i<n;i++){
			if(strcmp(s,list[i].tu)==0){
				test=1;
				list[i].dem++;
			}
		}
		if(test==0 && xauthuannghich(s)){
			strcpy(list[n].tu,s);
			list[n].dem=1;
			n++;
		}
  	}
  	struct danhsach temp[1000];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(sosanh(list[i].tu,list[j].tu)==1){
					temp=list[i];
					list[i]=list[j];
					list[j]=temp;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(strlen(list[i].tu)==max) printf("%s %d\n",list[i].tu,list[i].dem);
		}
	return 0;
}

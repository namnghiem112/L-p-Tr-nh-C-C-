#include<stdio.h>
#include<string.h>
struct danhsach{
	char ten[100];
};
void xoa(char s[],int vitrixoa){
  for(int i=vitrixoa;i<strlen(s);i++){
    s[i]=s[i+1];
  }
}
void xoakt(char s[]){
  for(int i=0;i<strlen(s);i++){
    if(s[i]==' ' && s[i+1]==' '){
      xoa(s,i);
      i--;
    }
  }
  if(s[0]==' ') xoa(s,0);
  if(s[strlen(s)-2]==' ') xoa(s,strlen(s)-2);
}
void xuatxau(char s[],char s1[]){
	int dem=0,dem1=0,k1=0,k=0;
	if(s[0]!=32) dem++;
  for(int i=0;i<strlen(s);i++){
    if(s[i]==32 && s[i+1]!=32) dem++;
  }
  for(int i=0;i<strlen(s);i++){
    if(s[i]>=65 && s[i]<=90) s[i]+=32;
  }
  for(int i=0;i<strlen(s)-2;i++){
    if(s[i]==32) dem1++;
    if(dem1==dem-1) {
    s1[k1]=s[i+1];
	k1++;	
    }
  }
  s1[k1]=s[0];
  k1++;
  for(int i=0;i<strlen(s);i++){
    if(s[i]==32) k++;
    if(k==dem-1) break;
    if(s[i]==32 ) {
    	s1[k1]=s[i+1];
    	k1++;
    }
  }
}
int main(){
  struct danhsach list[100];
  int n,p=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
  	scanf("\n");
  	char s1[100]="";
  	fgets(list[i].ten,99,stdin);
  	xoakt(list[i].ten);
  	xuatxau(list[i].ten,s1);
  	strcpy(list[i].ten,s1);
  }
  for(int i=1;i<=n;i++){
  	p=0;
  	for(int j=i;j>=1;j--){
  		if(strcmp(list[i].ten,list[j].ten)==0) p++;
	  }
	  printf("%s",list[i].ten);
	  if(p>1) printf("%d",p);
	  printf("@ptit.edu.vn\n");
}
}

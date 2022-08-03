#include<iostream>
#include<string.h>
using namespace std;
void xoa(char s[], int vitrixoa){
  for(int i=vitrixoa;i<strlen(s);i++){
    s[i]=s[i+1];
  }
}
void xoakt(char s[]){
  for(int i=0;i<strlen(s);i++){
		if(s[i]==' '&& s[i+1]==' ')
		{
			xoa(s,i);
			i--;
		}
	}
	if(s[0]==' ') xoa(s,0);
}
int main(){
	char s[100];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=s[i]+32;
		}
	}
	xoakt(s);
	int dem=0;
	if(s[0]!=32) dem++;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==32 && s[i+1]!=32) dem++;
	}
	int k=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==32) k++;
		if(k==dem-1){
			if(s[i]!=32) cout<<s[i];
		}
	}
	cout<<s[0];
	int dem2=0;
	for(int i=1;i<strlen(s);i++){
		if(s[i]==32) dem2++;
		if(dem2==dem-1) break;
		if(s[i]==32 && s[i+1]!=0){
			cout<<s[i+1];
			continue;
		}
	}
	cout<<"@ptit.edu.vn"<<endl;
	return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
	while(1){
	int mang[100];
	for(int i=0;i<4;i++){
		scanf("%d",&mang[i]);	
	}
	if(mang[0]==0 && mang[1]==0 && mang[2]==0 && mang[3]==0) break;
	int buoc=0,dem=0,x;
	while(dem!=3){
	x=mang[0];
	for(int i=0;i<3;i++){
		mang[i]=abs(mang[i]-mang[i+1]);
	}
	mang[3]=abs(mang[3]-x);
	dem=0;
	for(int i=1;i<4;i++){
		if(mang[i]==mang[0]) dem++;
	}
	buoc++;
	}
	printf("%d\n",buoc);
}
	return 0;
}

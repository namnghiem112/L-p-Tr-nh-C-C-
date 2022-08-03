#include<stdio.h>
int kiemtra(int n){
	int p,s=0;
	while(n!=0){
		p=n%10;
		s+=p;
		n/=10;
	}
	return s;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int n,mang[10000],mang2[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&mang[i]);
		mang2[i]=kiemtra(mang[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(mang2[i]>mang2[j]){
				int temp=mang[i];
				mang[i]=mang[j];
				mang[j]=temp;
				int k=mang2[i];
				mang2[i]=mang2[j];
				mang2[j]=k;
			}
			if(mang2[i]==mang2[j]){
				if(mang[i]>mang[j]){
				int temp=mang[i];
				mang[i]=mang[j];
				mang[j]=temp;
				int k=mang2[i];
				mang2[i]=mang2[j];
				mang2[j]=k;
				}
			}
		}
	}
	for(int i=0;i<n-1;i++){
		printf("%d ",mang[i]);
	}
	printf("%d\n",mang[n-1]);
}
return 0;
}

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[1005][1005],b[1000];
	for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           scanf("%d",&a[i][j]);
       }
   }
   if(n==2) printf("%d %d",1,a[0][1]-1);
   if(n>2){
        b[2]=a[0][2]-a[0][1];
       b[2]=(b[2]+a[1][2])/2;
       b[1]=a[1][2]-b[2];
       b[0]=a[0][1]-b[1];
       for(int i=3;i<n;i++){
       
            b[i]=a[i][i-1]-b[i-1];
       }
           
       
   }
   for(int i=0;i<n;i++) printf("%d ",b[i]);
}

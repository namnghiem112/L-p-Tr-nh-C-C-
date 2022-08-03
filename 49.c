#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int n1=n,p,s=0;
    while(n1!=0){
        p=n1%10;
        s=s*10+p;
        n1/=10;
    }
    printf("%d",s%10);
    return 0;
}
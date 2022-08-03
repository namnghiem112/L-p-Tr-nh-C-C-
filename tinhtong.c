#include<stdio.h>
#include<math.h>
int main(){
    int  a,b;
    float c;
    scanf("%d%d",&a,&b);
    if(b==0){printf("0");}
    else
    if(b!=0)
    {
    c=float (a/b);
    printf("%d %d %d %.2f %d",a+b,a-b,a*b,c,a%b);
    }
    return 0;
}
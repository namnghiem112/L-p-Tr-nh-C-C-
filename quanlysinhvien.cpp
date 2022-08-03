#include <stdio.h>
#include<string.h>
struct danhsach
{
    char tenchuho[100];
    int sodien;
    long long sotien;
};
int tiendien(int dien)
{
    if(dien<250)
    {
        return dien*250;
    }
    else if(dien>=250 && dien<=400)
    {
        return dien*3000;
    }
    else if(dien>=400 && dien<=500)
    {
        return dien*4000;
    }
    else if(dien>=500)
    {
        return dien*5000;
    }
}
int main()
{
    int n,dem=0;
    scanf("%d",&n);
    printf("%d\n",tiendien(n));
    struct danhsach list[100];
    struct danhsach temp;
    long long min=1000000;
    char sosanh[100]="*****";
      for(int i=1;i<=100;i++){
      	fflush(stdin);
        scanf("%s\n",list[i].tenchuho);
        scanf("%d",&list[i].sodien);
        list[i].sotien=tiendien(list[i].sodien);
        if(list[i].sotien<min) min=list[i].sotien;
        dem++;
        if(strcmp(list[i].tenchuho,sosanh)==0) break;
      }
      printf("%lld\n",min);
      for(int i=1;i<=dem;i++){
        for(int j=i+1;j<=dem;j++){
          if(list[i].sotien>list[j].sotien){
            temp=list[i];
            list[i]=list[j];
            list[j]=temp;
          }
        }
      }
      for(int i=1;i<=dem;i++){
      	if(strcmp(list[i].tenchuho,sosanh)==0) continue;
        printf("%s %lld\n",list[i].tenchuho,list[i].sotien);
      }
    return 0;
}

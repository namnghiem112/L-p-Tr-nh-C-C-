#include<stdio.h>
#include<math.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  double a1,a2,b1,b2,c1,c2,p;
  double AB,BC,AC;
  scanf("%lf%lf%lf%lf%lf%lf",&a1,&a2,&b1,&b2,&c1,&c2);
  AB=  sqrt(pow(a1-b1,2)+pow(a2-b2,2));
  BC=  sqrt(pow(c1-b1,2)+pow(c2-b2,2));
  AC=  sqrt(pow(a1-c1,2)+pow(a2-c2,2));
  if(AB+BC>AC && AB+AC>BC && AC+BC>AB ){
   p= AB+BC+AC;
   if(p== (int) p) printf("%d\n",p);
   else printf("%.3lf\n",p);
  } else printf("INVALID\n");
  }
  return 0;
}
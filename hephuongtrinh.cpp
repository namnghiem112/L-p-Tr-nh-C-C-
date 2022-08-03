#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, d, e, f;
    cin>> a >> b >> c >> d >> e >> f;
    float D, Dx, Dy;
    D = a * e - d * b;
    Dx = c * e - f * b;
    Dy = a * f - d * c;
    if(D!=0){
        cout<<"pt co nghiem duy nhat "<<Dx/D<<" "<<Dy/D;
    }
    else
    if(D==0){
        if(Dx==0 && Dy==0){
            cout<<"pt co so nghiem";
        } else cout<<"pt vo nghiem";
    }
    return 0;
}
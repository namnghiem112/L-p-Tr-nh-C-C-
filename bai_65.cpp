#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    float p=b*b-4*a*c;
    if(p==0){
        cout<<"pt co ng kep "<<(-b)/(2*a);
    }
    else
    if(p>0){
        cout<<"pt co 2 ng pb la "<<((-b)+sqrt(p))/(2*a)<<" "<<((-b)-sqrt(p))/(2*a);
    }
    else if(p<0){ 
        cout<<"pt vo ng";
    }
    return 0;
}
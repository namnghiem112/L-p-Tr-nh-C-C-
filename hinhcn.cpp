#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"1-hinh tron 2-hinh cn 3-hinh vuong"<<endl;
    int chon;
    cin>>chon;
    switch(chon){
        case 1:
            float r;
            cin>>r;
            cout<<"dien tich hinh tron="<<3.14*r*r;
            break;
        case 2:
            float a,b;
            cin>>a>>b;
            cout<<"dien tich hinh cn="<<a*b;
            break;      
        case 3:
            float c;
            cin>>c;
            cout<<"dien tich hinh vuong="<<c*c;
            break;
    }
    return 0;

}
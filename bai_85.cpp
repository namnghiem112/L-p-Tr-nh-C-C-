#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    switch(b){
        case 2:{
            if(a<=29){
                cout<<"YES";
            } else {cout<<"NO";}
            break;
        }
        case 1: case 3: case 5: case 7: case 8: case 10 : case 12:
        {
            if(a<=31){cout<<"YES";}
            else {cout<<"NO";}
            break;
        }
        case 4: case 6: case 9: case 11:{
            if(a<=30){cout<<"YES";}
            else {cout<<"NO";}
            break;
        }
        
    }
    return 0;
}
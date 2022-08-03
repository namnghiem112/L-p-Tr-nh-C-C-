#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,p,b;
    cin>>n;
    if(n<10){
        cout<<"nhap so co 2 chu so";
    } else 
    if(n>=10){
            p=n/10;
            if(p==1) {cout<<"muoi";}
            if(p==2) {cout<<"hai muoi";}
            if(p==3) {cout<<"ba muoi";}
            if(p==4) {cout<<"bon muoi";}
            if(p==5) {cout<<"nam muoi";}
            if(p==6) {cout<<"sau muoi";}
            if(p==7) {cout<<"bay muoi";}
            if(p==8) {cout<<"tam muoi";}
            if(p==9) {cout<<"chin muoi";}
            b=n%10;
            if(b==1) {cout<<" mot";}
            if(b==2) {cout<<" hai";}
            if(b==3) {cout<<" ba";}
            if(b==4) {cout<<" tu";}
            if(b==5) {cout<<" nam";}
            if(b==6) {cout<<" sau";}
            if(b==7) {cout<<" bay";}
            if(b==8) {cout<<" tam";}
            if(b==9) {cout<<" chin";}
        }
    return 0;
}
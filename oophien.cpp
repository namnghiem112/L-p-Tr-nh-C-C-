#include<bits/stdc++.h>
using namespace std;
int ucln(int a,int b){
  while(a!=b){
    if(a>b) a=a-b;
    else b-=a;
  }
  return a;
}

class honso {
  private:
    int tu,mau,nguyen;
  public:
    void nhapbp();
    void xemmh();
     honso(int nguyen,int tu,int mau){
       this->nguyen=nguyen;
       this->tu=tu;
       this->mau=mau;
     }
     honso(){
       nguyen=tu=mau=0;
     }
     void rutgon();
     honso operator + (honso a);
     honso(float x){
       int dem=0;       
       while((int) x==x){
         x*=10;
         dem++;
       }
       int k=ucln(x,pow(10,dem));
       tu=x/k;
       mau=pow(10,dem)/k;
       nguyen=tu/mau;
       tu=tu-nguyen*mau;
     }
};
void honso ::nhapbp(){
  cin>>nguyen>>tu>>mau;
}
void honso:: rutgon(){
  tu=nguyen*mau+tu;
  nguyen=tu/mau;
  tu=tu-nguyen*mau;
}
honso honso::operator +(honso b){
  honso tong;
  tong.tu=(this->nguyen*this->mau + this->tu)*b.mau+this->mau*(b.nguyen*b.mau+b.tu);
  tong.mau=this->mau*b.mau;
  tong.nguyen=tong.tu/tong.mau;
  tong.tu=tong.tu-tong.mau*tong.nguyen;
  return tong;
}
void honso::xemmh(){
  cout<<nguyen<<" "<<tu<<" "<<mau<<endl;
}
int main(){
  honso a,b(2,3,5),c;
  a.nhapbp();a.rutgon();a.xemmh();
  c=a+b; c.xemmh();
  a=honso(1.25);a.xemmh();
}

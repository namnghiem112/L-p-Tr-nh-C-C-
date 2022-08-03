#include<bits/stdc++.h>
using namespace std;
class VDV {
  public:
    string ho,ten;
    int sohuychuong,tuoi;
  public:
    friend void nhap(VDV &);
    friend void xuat(VDV &);
};
class VDVXEDAP: public VDV{
  private:
    int thanhtichthidau;
    long long thuong;
  public:
    friend istream& operator >>(istream& cin, VDVXEDAP &);
    friend ostream& operator <<(ostream& cout, VDVXEDAP);
    friend bool cmp (VDVXEDAP a,VDVXEDAP b);
};
istream& operator >>(istream& cin, VDVXEDAP &a){
  cin>>a.ho>>a.ten;
  cin>>a.tuoi>>a.sohuychuong>>a.thanhtichthidau;
  a.thuong=a.sohuychuong*5000000;
  if(a.sohuychuong<60){
    a.thuong*=1.2;
  }
  return cin;
}
ostream& operator <<(ostream& cout, VDVXEDAP a){
  cout<<a.ho<<" "<<a.ten<<" "<<a.tuoi<<" "<<a.sohuychuong<<" "<<a.thuong<<endl;
  return cout;
}
void demsoluong(VDVXEDAP a[],int n){
  int dem=0;
  for(int i=0;i<n;i++){
    if(a[i].ho=="Nguyen" && a[i].tuoi==18) dem++;
  }
  cout<<"So luong VDVXEDAP ho Nguyen va tuoi 18 la "<<dem<<endl;
}
bool cmp(VDVXEDAP A,VDVXEDAP B){
  return A.sohuychuong < B.sohuychuong;
}
void sapxep(VDVXEDAP a[],int n){
  sort(a,a+n,cmp);
}
int main(){
  int n,i;
  cin>>n;
  VDVXEDAP ds[50]; 
  for(i=0;i<n;i++){
      cin >> ds[i];
    }
	cout<<"In danh sach ban dau"<<endl;
  for(i=0;i<n;i++){
      cout << ds[i];
  }
  demsoluong(ds,n);
  sapxep(ds,n);
  cout<<"IN danh sach sau sap xep"<<endl;
  for(i=0;i<n;i++){
      cout << ds[i];
  }
  return 0;
}

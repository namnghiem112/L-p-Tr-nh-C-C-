#include<bits/stdc++.h>
using namespace std;
#define a() a
class NhanVien
{
  private :
    string ten,ngaysinh,masinhvien,gioitinh,diachi,maso,ngayky;
  public:
    friend istream& operator >>(istream& in, NhanVien &);
    friend ostream& operator <<(ostream& xuat, NhanVien);
};
istream& operator >>(istream& cin, NhanVien &a){
  getline(cin,a.ten);
  cin>>a.gioitinh>>a.ngaysinh;
  cin.ignore();
  getline(cin,a.diachi);
  cin>>a.maso>>a.ngayky;
  // if(a.ngaysinh[2]!='/') a.ngaysinh= "0"+a.ngaysinh;
  // if(a.ngaysinh[5]!='/') a.ngaysinh.insert(3,"0");
  a.masinhvien="00001";
  // string tmp,res="";
  // stringstream ss(a.ten);
  // while(ss >> tmp){
  //   res+=toupper(tmp[0]);
  //   for(int i=1;i<tmp.length();i++)
  //     res+=tolower(tmp[i]);
  //   res+=" ";
  // }
  // a.ten=res.erase(res.length()-1);
  return cin;
}
ostream& operator << (ostream& cout, NhanVien a){
	cout<<a.masinhvien<<" "<<a.ten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.maso<<" "<<a.ngayky;
	return cout;
}
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}


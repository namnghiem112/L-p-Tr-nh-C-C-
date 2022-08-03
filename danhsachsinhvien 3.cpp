#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    int msv;
    string ten, lop, tuoi;
    float gpa;
};
string kiemtra(string s){
  stringstream ss(s);
  string tmp,a;
  while(ss>>tmp){
    a+=tmp;
    a+=" ";
  }
  s=a;
  for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
  if(s[0]!=32) s[0]=toupper(s[0]);
  for(int i=0;i<s.length()-1;i++){
    if(s[i]==' ' && s[i+1]!=' ') s[i+1]=toupper(s[i+1]);
  }
  return s;
}
void nhap(SinhVien ds[], int x)
{
    for (int i = 0; i < x; i++)
    {
        scanf("\n");
        getline(cin, ds[i].ten);
        cin >> ds[i].lop >> ds[i].tuoi >> ds[i].gpa;
        if (ds[i].tuoi[1] == '/')
            ds[i].tuoi = "0" + ds[i].tuoi;
        if (ds[i].tuoi[4] == '/')
            ds[i].tuoi.insert(3, "0");
            ds[i].msv=i+1;
    	ds[i].ten=kiemtra(ds[i].ten);
    }
  
}
void sapxep( SinhVien ds[],int x)
{
      for(int i=0;i<x-1;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(ds[i].gpa<ds[j].gpa)
            {
                SinhVien swap=ds[i];
                ds[i]=ds[j];
                ds[j]=swap;
            }
        }
    }
}
void in(SinhVien ds[], int x)
{
    for (int i = 0; i < x; i++)
    {
        if(ds[i].msv>9) cout << "B20DCCN0" << ds[i].msv << " ";
        else cout << "B20DCCN00" << ds[i].msv << " ";
        cout  << ds[i].ten << " " << ds[i].lop << " " << ds[i].tuoi << " ";
        printf("%.2f", ds[i].gpa);
        cout << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

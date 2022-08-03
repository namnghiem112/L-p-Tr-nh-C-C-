#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;
class MonHoc {
  public:
    string macathi,mamonhoc;
  public:
    friend istream& operator >>(istream& cin, MonHoc &);
    friend ostream& operator <<(ostream& cout, MonHoc);
};
istream& operator >>(istream& cin, MonHoc &a){
  cin>>a.macathi>>a.mamonhoc;
  mp[a.macathi]=a.mamonhoc;
  return cin;
}
class LichThi:public MonHoc{
  public:
    string ngay,time,nhom,id,monhoc,mamonhoc;
    int date,month,year,gio,phut;
  public :
    friend istream& operator>>(istream& cin,LichThi &);
    friend ostream& operator<<(ostream &cout,LichThi);
};
int dem=0;
istream& operator>>(istream& cin,LichThi &a){
  dem++;
  cin>>a.mamonhoc>>a.ngay>>a.time>>a.nhom;
  if(a.ngay[1]=='/') a.ngay+='0';
  if(a.ngay[4]=='/') a.ngay.insert(3,"0");
  if(a.time[2] != ':') a.time.insert(0, "0");
  a.monhoc=mp[a.mamonhoc];
  string x=to_string(dem);
  a.id = string(3-x.length(),'0')+ x;
  string tmp;
  stringstream ss(a.ngay);
  int k=0,p=0;
  while(getline(ss,tmp,'/')){
    k++;
    if(k==1) a.date=stoi(tmp);
    if(k==2) a.month=stoi(tmp);
    else a.year=stoi(tmp);
  }
  stringstream sx(a.time);
  while(getline(sx,tmp,':')){
    p++;
    if(p==1) a.gio=stoi(tmp);
    else a.phut=stoi(tmp);
  }
  return cin;
}
bool cmp (LichThi a, LichThi b ){
  if(a.year == b.year && a.month == b.month && a.date == b.date){
        if(a.gio == b.gio && a.phut == b.phut)
            return a.id < b.id;
    }
    if(a.year == b.year && a.month == b.month && a.date == b.date){
        if(a.gio == b.gio) return a.phut < b.phut;
    }
    if(a.year == b.year && a.month == b.month && a.date == b.date){
        return a.gio < b.gio;
    }
    if(a.year == b.year && a.month == b.month) return a.date < b.date;
    if(a.year == b.year ) return a.month < b.month;
    return a.year < b.year;
}
void process(MonHoc mh[100],int n, LichThi lt[100] ,int m){
  sort(lt, lt + m, cmp);
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}

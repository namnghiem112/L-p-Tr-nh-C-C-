#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
struct HangHoa{
	char TenHang[30];
	int SoLuong;
	float BanBuon;
	float TongTien;
};
int main(){
	struct HangHoa list[100];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("\n");
		gets(list[i].TenHang);
		cin>>list[i].SoLuong;
		cin>>list[i].BanBuon;
		list[i].TongTien=list[i].SoLuong*list[i].BanBuon;
	}
	int vitri;
	cin>>vitri;
	cout<<list[vitri].TenHang<<" "<<list[vitri].SoLuong<<" "<<list[vitri].TongTien<<" ";
	return 0;
}

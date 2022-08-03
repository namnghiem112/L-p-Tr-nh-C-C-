#include<bits/stdc++.h>
#include<windows.h>
#include<fstream>
using namespace std;
int main(){
	fstream f;
	f.open("h.txt",ios::in);
	std :: string line;
	cout<<"Nhap ten nguoi yeu ban:"<<endl;
	char s[100];
	while(1){
	gets(s);
	char ten[100]="huyen";
	if(strcmp(s,ten)==0){
	for(int i=10;i<=100;i+=10){
		cout<<"Dang xu ly:"<<i<<"%"<<endl;
		Sleep(200);
	}
	cout<<"HOAN THANH"<<endl;
	while(!f.eof()){
		getline(f ,line);
		cout<<line<<endl;
		Sleep(100);
	}
	f.close();
		} 
			else cout<<"Nhap sai roi, nhap lai ten nguoi yeu ban nhanh"<<endl;
	}	
	return 0;
}

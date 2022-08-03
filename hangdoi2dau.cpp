#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	deque<string>de;
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);
		if(s=="PRINTFRONT"){
			if(de.empty()) cout<<"NONE"<<endl;
			else cout<<de.front()<<endl;
		}
		else if(s=="POPFRONT" && !de.empty()){
			de.pop_front();
		}
		else if(s=="POPBACK" && !de.empty()){
			de.pop_back();
		}
		else if(s=="PRINTBACK"){
			if(de.empty()) cout<<"NONE"<<endl;
			else cout<<de.back()<<endl;
		}
		else if(s!="POPBACK" && s!="POPFRONT"){
			string s2="",tmp="",s3="";
			int dem=0;
			stringstream ss(s);
			while(ss>>tmp){
				dem++;
				if(dem==1) s2=tmp;
				else s3=tmp;
			}
				if(s2=="PUSHFRONT"){
					de.push_front(s3);
				}
				else if(s2=="PUSHBACK") de.push_back(s3);
		}
	}
}

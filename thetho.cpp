#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
	cin>>n;
	int a[n];
	string s;
	scanf("\n");
	for(int i = 0 ;i < n ;i++){
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		int dem = 0;
		while(ss>>tmp){
            dem++;
		}
		a[i] = dem;
	}
	int output = 0;
	vector<int> v;
	for(int i = 0 ;i < n;i++){
		if(a[i] != 7){
			output++;
			while(a[i]!=7){
				i++;
			}
			v.push_back(1);
		}
		if(a[i] == 7){
			int check = 1;
			while(a[i] == 7){
				i++;
				check++;
				if(check == 4){
					output++;
					v.push_back(2);
					check = 0;
				}
			}
		}
	}
	cout<<output<<endl;
	for(auto x : v){
		cout<<x<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
struct danhsach {
	int first,second;
};
bool cmp(struct danhsach a,struct danhsach b){
	if(a.second==b.second) return a.first <b.first;
	else return a.second < b.second;
}
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n;
        cin >> n;
        struct danhsach a[n+5];
        for (int i = 0; i < n; i++)
            cin >> a[i].first >> a[i].second;
        sort(a,a+n,cmp); 
		int dem=1,x;
		x=a[0].second;
		for(int i=1;i<n;i++){
			if(a[i].first>x){
				dem++;
				x=a[i].second;
			}
		}
		cout<<dem<<endl;
    }
}


#include<iostream>
#include<math.h>
using namespace std;
void xuly(int s[], int n) {
    s[n-1]++;
    for (int i = n-1; i>0;i--) {
        if (s[i]>1) {
            s[i-1]++;
            s[i] -= 2;
        }
    }
}
void xuat(int A[], int n) {
    for (int i = 0; i < n; i++)
        cout <<A[i];
        cout<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
    int n;
    cin >> n;
    // int *mang = new int[n];
    int mang[n];
    for (int i = 0; i < n; i++){
      mang[i] = 0; 
    }
    for (int i = 0; i < pow(2, n); i++) {
        xuat(mang, n);
        xuly(mang, n);
    }
    cout<<endl;
	}
	return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e6;
int a[N];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }   
    sort(a, a + n);
    int dem = 1;
    for(int i = 1; i < n;i++){
        if(a[i] == a[i-1]) dem++;
        if(dem>=2){
            cout<<a[i];
            break;
        }
        else cout<<"NO";
    }
    return 0;   
}
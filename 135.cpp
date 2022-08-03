#include <iostream>
using namespace std;
int main()
{
    int n, a[100],dem=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            cout << a[i];
            break;
        } 
    }
    for(int i=0;i<n;i++){
        if(a[i]<0){
            dem++;
        }
    }
    if(dem==n){
        cout<<"-1";
    }
    return 0;
}
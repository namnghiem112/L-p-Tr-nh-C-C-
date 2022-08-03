#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e6;

int a[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    int dem = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
            dem++;
        else
        {
            cout << "\nPhan tu " << a[i] << " xuat hien " << dem << " lan!";
            dem = 1;
        }
    }
    return 0;
}
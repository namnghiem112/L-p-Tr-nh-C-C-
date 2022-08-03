#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p;
    int dem = 0;
    while (n > 1)
    {
        p = n % 2;
        if (p != 0)
        {
            dem++;
        }
        n /= 2;
    }
    if (dem == 0)
    {
        cout << "la so dang 2^k";
    }
    else
        cout << "ko co dang 2^k";
    return 0;
}
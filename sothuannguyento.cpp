#include <iostream>
#include <math.h>
using namespace std;

bool kiemTraSoNguyenTo(long n)
{
    if (n < 2)
    {
        return 0;
    }
    for (long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

bool chuSoNguyenTo(long n)
{
    int c;
    while (n > 0)
    {
        c = n % 10;
        n /= 10;
        if (!kiemTraSoNguyenTo(c))
        {
            return 0;
        }
    }
    return 1;
}
bool kiemTraTongChuSoNguyenTo(long n)
{
    int tongChuSo = 0;
    while (n > 0)
    {
        tongChuSo += n % 10;
        n = n / 10;
    }
    return kiemTraSoNguyenTo(tongChuSo);
}

int main()
{
    long a, b;
    cin >> a >> b;
    int dem=0;
    for (long i = a; i <= b; i++)
    {
        if (chuSoNguyenTo(i) && kiemTraTongChuSoNguyenTo(i) && kiemTraSoNguyenTo(i))
        {
            dem++;
        }
    }
    cout << dem;

    return 0;
}

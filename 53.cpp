#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long n, p, max = 0, dem = 0;
    cin >> n;
    long long n1 = n;
    while (n1 != 0)
    {
        p = n1 % 10;
        if (p > max)
        {
            max = p;
        }
        n1 /= 10;
    }
    long long n2 = n, i;
    while (n2 != 0)
    {
        i = n2 % 10;
        if (i == max)
        {
            dem++;
        }
        n2 /= 10;
    }
    cout << dem;
    return 0;
}
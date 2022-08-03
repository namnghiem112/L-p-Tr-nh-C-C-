#include <iostream>
#include <cmath>
using namespace std;
bool soamstrong(long n)
{
    int p, s = 0, dem = 0, k;
    long n1 = n;
    while (n1 != 0)
    {
        p = n1 % 10;
        n1 /= 10;
        dem++;
    }
    long n2 = n;
    while (n2 != 0)
    {
        k = n2 % 10;
        s = s + pow(k, dem);
        n2 /= 10;
    }
    if (n == s)
    {
        return n;
    }
    return 0;
}
int main()
{
    long long i;
    for (i = 1; i <= 1000000; i++)
    {
        if (soamstrong(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
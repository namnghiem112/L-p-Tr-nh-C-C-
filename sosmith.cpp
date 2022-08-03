#include <stdio.h>
#include <math.h>
int tongchuso(long long n)
{
    long long p, s = 0;
    while (n != 0)
    {
        p = n % 10;
        s = s + p;
        n /= 10;
    }
    return s;
}
int main()
{
    long long tong = 0, m, n;
    scanf("%lld", &n);
    m = n;
    while (n % 2 == 0)
    {
        tong += 2;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            tong += i;
            n /= i;
        }
    }
    if (n > 1)
        tong += n;
    if (tongchuso(m) == tong)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
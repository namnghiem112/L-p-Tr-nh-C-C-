#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c, max, min;
    cin >> a >> b >> c;
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    if (a > min && a < max)
    {
        cout << min << " " << a << " " << max;
    }
    else if (b > min && b < max)
    {
        cout << min << " " << b << " " << max;
    }
    else if (c > min && c < max)
    {
        cout << min << " " << c << " " << max;
    }
    return 0;
}
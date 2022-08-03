#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, p, max = 0;
    cin >> n;
    while (n != 0)
    {
        p = n % 10;
        if (p > max)
        {
            max = p;
        }
        n /= 10;
    }
    cout << max;
    return 0;
}
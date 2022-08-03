#include <iostream>
#include <cmath>
using namespace std;
long gt(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * gt(n - 1);
}
int main()
{
    double x, s = 0, s1 = 0, s2 = 0;
    cin >> x;
    x = x * M_PI / 180;
    int i = 0;
    do
    {
        s1 = s2;
        s = s + (pow(-1, i) * pow(x, 2 * i + 1)) / gt(2 * i + 1);
        s2 = s;
        i++;
    } while (s2 - s1 > 0.00001);
    cout << s2;
    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
int S(int n)
{
    if (n < 0)
    {
        cout << n * (-1) << endl;
        return 0;
    }
    else
        cout << n << endl;
    return 1;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    S(a);
    S(b);
    S(c);
    return 0;
}
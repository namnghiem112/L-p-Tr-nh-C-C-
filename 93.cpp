#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i, dem = 0;
    cin >> n;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            dem++;
        }
    }
    if (dem == 0)
    {
        cout << "la so nguyen to";
    }
    else
        cout << "ko la so nguyen to";
    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, p1, p2, dem = 0;
    cin >> n;
    if (n <= 0)
    {
        cout << "xin loi nh n>0";
    }
    else
    {
        while (n != 0)
        {
            p1 = n % 10;
            p2 = (n / 10) % 10;
            if (p1 < p2)
            {
                dem++;
            }
            n /= 10;
        }
        if (dem == 0)
        {
            cout << "la so tang dan";
        }
        else
            cout << "ko la so tang dan";
    }
    return 0;
}
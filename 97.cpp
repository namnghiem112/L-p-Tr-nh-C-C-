#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c || a + c > b || b + c > a)
    {
        if (a == b && b == c)
        {
            cout << "la tam giac deu";
        }
        else if (a == b || b == c || a == c)
        {
            cout << "la tam giac can";
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
        {
            cout << "la tam giac vuong";
        }

        else
            cout << " la tam giac thuong";
    }
    return 0;
}
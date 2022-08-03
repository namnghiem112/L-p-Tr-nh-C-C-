#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    switch (b)
    {
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    {
        if (a < 30)
        {
            cout << a - 1 << " " << b << " " << c << endl;
            cout << a + 1 << " " << b << " " << c << endl;
        }
        else if (a == 30)
        {
            cout << a - 1 << " " << b << " " << c << endl;
            cout << "1"
                 << " " << b + 1 << " " << c << endl;
        }
        else
            cout << "ngay ko hop le";
        break;
    }
    case 4:
    case 6:
    case 9:
    case 11:
    {
        if (a < 31)
        {
            cout << a - 1 << " " << b << " " << c << endl;
            cout << a + 1 << " " << b << " " << c << endl;
        }
        else if (a == 31)
        {
            cout << a - 1 << " " << b << " " << c << endl;
            cout << "1"
                 << " " << b + 1 << " " << c << endl;
        }
        else
            cout << "ngay ko hop le";
        break;
    }
    case 2:
    {
        if (a < 29)
        {
            cout << a - 1 << " " << b << " " << c << endl;
            cout << "a+1"
                 << " " << b << " " << c << endl;
        }
        else if (a == 29)
        {
            cout << a - 1 << " " << b << " " << c << endl;
            cout << "1"
                 << " " << b + 1 << " " << c << endl;
        }
        else
            cout << "la ngay ko hop le";
        break;
    }
    case 12:
    {
        if (a < 30)
        {
            cout << a - 1 << " " << b << " " << c << endl;
            cout << "1"
                 << " " << b + 1 << " " << c << endl;
        }
        else if (a == 30)
        {
            cout << a - 1 << " " << b << " " << c << endl;
            cout << "1"
                 << " "
                 << "1"
                 << " " << c + 1 << endl;
        }
        else
            cout << "la ngay ko hop le";
        break;
    }
    case 1:
    {
        if (a < 31 && a > 1)
        {
            cout << a - 1 << " " << b << " " << c << endl;
            cout << a + 1 << " " << b << " " << c << endl;
        }
        else if (a == 31)
        {
            cout << a - 1 << " " << b << " " << c << endl;
            cout << "1"
                 << " " << b + 1 << " " << c << endl;
        }
        else if (a == 1)
        {
            cout << a + 1 << " " << b << " " << c << endl;
            cout << "30"
                 << " "
                 << "12"
                 << " " << c - 1 << endl;
        }
        else
            cout << "ngay ko hop le";
        break;
    }
    }
    return 0;
}
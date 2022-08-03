#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int j = 1; j <= a; j++)
    {
        cout << " * ";
    }
    cout << endl;
    for (int i = 2; i <= b - 1; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j == 1 || j == a)
            {
                cout << " * ";
            }
            else
                cout << "   ";
        }
        cout << endl;
    }
    for (int j = 1; j <= a; j++)
    {
        cout << " * ";
    }
    return 0;
}
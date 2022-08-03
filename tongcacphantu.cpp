#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0, temp;
        cin >> n;
        long a[100000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            int check = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    check = 1;
                    break;
                }
            }
            if (check == 0)
            {
                s = s + a[i];
            }
        }
        cout << s << endl;
    }
    return 0;
}
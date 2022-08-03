#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t > 0 && t <= 10)
    {
        while (t--)
        {
            int n, b;
            cin >> n >> b;
            long long a[n];
            if (n > 0 && n <= 1000 && b > 0 && b < n)
            {
                for (int i = 0; i < n; i++)
                {
                    cin >> a[i];
                }
                for (int i = b; i < n; i++)
                {
                    cout << a[i] << " ";
                }
                for (int i = 0; i < b; i++)
                {

                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
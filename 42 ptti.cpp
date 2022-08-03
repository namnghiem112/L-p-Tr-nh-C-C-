#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    set<int> s;
    int u = 0;
    for (int i = 1; i <= n; i++)
    {
      s.insert(a[i]);
      if (i - s.size() == 1)
      {
        u = i;
        break;
      }
    }
    if (s.size() == n)
      cout << "-1"
           << "\n";
    else
      cout << a[u] << "\n";
  }
}
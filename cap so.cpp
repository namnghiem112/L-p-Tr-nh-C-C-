#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(int a[], int n, int k) {
    sort(a, a + n);
    long long  ans = 0;
    for (int i = 0; i < n; i++){
        int temp = lower_bound(a + i + 1, a + n, k - a[i]) - a;
        ans += n - temp;
    }
    cout << ans << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        solve(a, n, k);
    }
    
}

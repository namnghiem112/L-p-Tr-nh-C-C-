#include  <iostream>
#include  <stdio.h>
using namespace std;
int mang[100];  int n, k;
void Xuatnghiem() {
    for (int i = 1; i <= k; i++)
        cout << mang[i];
    cout << " ";
}
void ToHop(int i) {
    for (int j = mang[i - 1] + 1; j <= n - k + i; j++) {
        mang[i] = j;
        if (i == k)
            Xuatnghiem();
        else
            ToHop(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        mang[0] = 0;  ToHop(1);
        cout << endl;
    }
    return 0;
}

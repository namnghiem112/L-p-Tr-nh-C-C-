#include <stdio.h>
#include <math.h>
int songuyento(int n)
{
    if (n == 0 || n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t, p = 1;
    scanf("%d", &t);
    while (t--)
    {
        int mang[100][100], n, dem = 0, k = 0, kt[500], m, m1 = 1, dem1 = 1;
        scanf("%d", &n);
        for (int i = 2; i <= 3000; i++)
        {
            if (songuyento(i) == 1)
            {
                dem++;
                m = i;
                if (m1 == dem)
                {
                    kt[m1] = m;
                    m1++;
                }
            }
        }
        printf("Test %d:\n", p);
        p++;
        for (int k = 0; k <= (n / 2) - 1; k++)
        {
            for (int i = k; i < n - k; i++)
            {
                mang[k][i] = kt[dem1++];
            }
            for (int i = k + 1; i < n - k; i++)
            {
                mang[i][n - 1 - k] = kt[dem1++];
            }
            for (int i = n - 2 - k; i >= k; i--)
            {
                mang[n - 1 - k][i] = kt[dem1++];
            }
            for (int i = n - 2 - k; i > k; i--)
            {
                mang[i][k] = kt[dem1++];
            }
        }
        if (n % 2 != 0)
            mang[n / 2][n / 2] = kt[dem1++];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", mang[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

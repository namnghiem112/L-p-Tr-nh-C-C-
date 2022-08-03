#include <stdio.h>
#include <math.h>
int main() {
    int n,mang[100][100] = {0};
    scanf("%d",&n);
        int index = 1,r = 1;
        while ( r <= n)
        {
            for (int i = r ; i <= n; i++)
                mang[i][r] = index++;
            r++;
        }
        for (int i = 1; i<=n;i++)
        {
            for (int j = 1; j<=n;j++)
                if (mang[i][j] != 0)
                printf("%d ", mang[i][j]);
            printf("\n");
        }
            return 0;
    }
#include <stdio.h>
typedef struct Time
{
    int gio, phut, giay;
} time;

int main()
{
    int t;
    scanf("%d", &t);
    time a[5001];
    for (int i = 0; i < t; i++)
        scanf("%d%d%d", &a[i].gio, &a[i].phut, &a[i].giay);
    for (int i = 0; i < t; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            if (a[i].gio > a[j].gio || a[i].gio == a[j].gio && a[i].phut > a[j].phut || a[i].gio == a[j].gio && a[i].phut == a[j].phut && a[i].giay > a[j].giay)
            {
                time x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d %d %d\n", a[i].gio, a[i].phut, a[i].giay);
    }
    return 0;
}

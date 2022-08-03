#include <stdio.h>
#include <math.h>
int main()
{
  int n, mang[100], kt[100] = {0}, min = 999;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &mang[i]);
  }
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (abs(mang[i] - mang[j]) <= min)
      {
        min = abs(mang[i] - mang[j]);
        kt[min]++;
      }
    }
  }
  printf("%d %d\n", min, kt[min]);
}
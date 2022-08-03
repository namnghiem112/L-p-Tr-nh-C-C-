#include <stdio.h>
int prime[2000005] = {0};
int d[2000005] = {0};
void snt()
{
	for (int i = 2; i  <= 2000005; i++)
	{ 
    prime[i]=1;
    }
	for (int i = 2; i  <= 2000005; i++)
	{
		if (prime[i] == 1)
		{
			for (int j = i; j <= 2000005; j += i)
			{
				int k = j;
				while (k % i == 0)
				{
					k /= i;
					d[j] += i;
					prime[j] = 0;
				}
			}
		}
	}
}
int main()
{
	snt();
	long long n;
	scanf("%lld", &n);
	long long s = 0;
	while (n--)
	{
		long long p;
		scanf("%lld", &p);
		s += d[p];
	}
	printf("%lld", s);
	return 0;
}
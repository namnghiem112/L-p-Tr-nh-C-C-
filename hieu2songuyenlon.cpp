#include <stdio.h>
#include <string.h>
#include <math.h>
void tong(char s1[500], char s2[500])
{
	long long a[500], b[500], i, j, n, temp = 0;
	char c[500];
	long long d1 = strlen(s1), d2 = strlen(s2);
	if (d1 > d2)
	{
		n = d1;
		for (i = 0; i < n; i++)
		{
			a[i] = s1[i] - '0';
			if (i < d1 - d2)
			{
				b[i] = 0;
			}
			else
			{
				b[i] = s2[i - n + d2] - '0';
			}
		}
	}
	else
	{
		n = d2;
		for (i = 0; i < n; i++)
		{
			a[i] = s2[i] - '0';
			if (i < d2 - d1)
			{
				b[i] = 0;
			}
			else
			{
				b[i] = s1[i - n + d1] - '0';
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] < b[i])
		{
			temp = 1;
			break;
		}
		if (a[i] > b[i])
		{
			temp = 0;
			break;
		}
	}
	long long muon = 0, k = 0;
	for (i = n - 1; i >= 0; i--)
	{
		if (temp == 0)
		{
			int x = a[i] - b[i]-muon;
			if (x < 0)
			{
				c[k++] = x + 10 + 48;
				muon = 1;
			}
			else
			{
				c[k++] = x + 48;
				muon = 0;
			}
		}
		else
		{
			int x = b[i] - a[i]- muon;
			if (x < 0)
			{
				c[k++] = x + 10 + 48;
				muon = 1;
			}
			else
			{
				c[k++] = x + 48;
				muon = 0;
			}
		}
	}
	int dem=0;
	for(i=k-1;i>=0;i--){
		if(c[i]=='0') dem++;
		if(c[i]!='0') break;
	}
	for (i = k-1-dem; i >= 0; i--)
	{	
		printf("%c", c[i]);
	}
}
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--)
	{
		char s1[500], s2[500];
		gets(s1);
		gets(s2);
		tong(s1, s2);
		printf("\n");
	}
	return 0;
}

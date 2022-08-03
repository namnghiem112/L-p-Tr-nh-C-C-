#include<bits/stdc++.h>

using namespace std;
int  main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n,k; cin >> n >> k;
		long long a[n+5];
		for(long long i=0;i<n;i++) cin >> a[i];
		long long dem=0;
		sort(a,a+n);
		for(long long i=0;i<n-2;i++)
		{
			if(a[i]<k)
			{
				for(long long j=i+1;j<n-1;j++)
				{
					if(a[i]+a[j]<k)
					{
						auto it=lower_bound(a+j+1,a+n,k-a[i]-a[j]);
						long long x=it-a;
						dem+=x-j-1;
					}
					else break;
				}
			}
			else break;
		}
		cout << dem << endl;
	}
}

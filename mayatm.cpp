#include<bits/stdc++.h>

using namespace std;
int n,s,c[1001],a[1001],stop=0;

void sinh(int k)
{
	int i=k;
	while(i>0 && c[i]==n-k+i) i--;
	if(i<=0) stop=1;
	else
	{
		c[i]++;
		for(int j=i+1;j<=k;j++)
		{
			c[j]=c[j-1]+1;
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int check=0;
		cin >> n >> s;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<=n;i++)
	{
		stop=0;
		for(int j=1;j<=i;j++)
		{
			c[j]=j;
		}
		while(!stop)
	{
		int res=0;
		for(int j=1;j<=i;j++)
		{
			res+=a[c[j]];
		}
		if(res==s)
		{
			cout << i ;
			check=1;
			break;
		}
		sinh(i);
	}
	if(check==1) break;
	}
	if(check==0) cout << -1;
	cout << endl;
	}
}

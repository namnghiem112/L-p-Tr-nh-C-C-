#include<bits/stdc++.h>
using namespace std;
long long countTriplets(long long arr[], long long n, long long sum)
{
    sort(arr, arr+n);
    long long ans = 0;
    for (long long i = 0; i < n - 2; i++)
    {
        long long j = i + 1, k = n - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] >= sum)
                k--;
            else
            {
                ans += (k - j);
                j++;
            }
        }
    }
    return ans;
}
int main()
{	
	int t;
	cin>>t;
	while(t--){
    long long n,sum; cin >> n >> sum;
	long long arr[n+5];
	for(long long i=0;i<n;i++) cin >> arr[i];
    cout << countTriplets(arr, n, sum) << endl;
	}
    return 0;
}

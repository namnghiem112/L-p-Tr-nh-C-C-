#include <bits/stdc++.h>
using namespace std;
bool find3Numbers(long long A[], long long arr_size, long long sum)
{
    int l, r;
    sort(A, A + arr_size);
    for (int i = 0; i < arr_size - 2; i++) {
        l = i + 1; 
        r = arr_size - 1;
        while (l < r) {
            if (A[i] + A[l] + A[r] == sum) {
                return true;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else 
                r--;
        }
    }
    return false;
}
int main()
{	
	int t;
	cin>>t;
	while(t--){
    long long n,sum; 
	cin >> n >> sum;
	long long A[n+5];
	for(long long i=0;i<n;i++) cin >> A[i];
    if(find3Numbers(A, n, sum)) cout<<"YES\n";
    else cout<<"NO\n";
	}
    return 0;
}

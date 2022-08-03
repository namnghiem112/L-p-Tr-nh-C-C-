#include<iostream>
#include<vector>
using namespace std;
int arr[100005];
int used[100005];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (used[arr[i]-1] == 0) {
			used[arr[i]] = 1;
		}
		else {
			used[arr[i]] = used[arr[i] - 1] + 1;
		}
	}
	for (int i = 0; i < n; i++) {
		ans = max(ans, used[arr[i]]);
	}
	cout << n - ans;
}

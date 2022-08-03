#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a = n, k = 0;
		if(n <= 10 ){
			cout << n<<endl;
		}
    else
    {
			while(a){
				int s = n / pow(10,k);
				if(k > 0) 
        {
					if((s+1)*pow(10,k)-n <= n-s*pow(10,k)) 
          {
            n = (s+1)*pow(10,k);
          }
					else n = s*pow(10,k);
				}
				a/=10;
				k++;
			}
			cout <<n<<endl;
		}
	}
	return 0;
}

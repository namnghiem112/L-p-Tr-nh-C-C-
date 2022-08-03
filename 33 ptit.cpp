#include <iostream>
#include <math.h>
using namespace std;
#define e 1000000007
long long Power(int k,int n)
{	
  if(k==0 || k==n) return 1;
  if(k==1) return n;
  else{
  long long s=1,s1=1,s3=1;
  for(int i=1;i<=n;i++){
  	s*=i;
  }
  for(int i=1;i<=k;i++){
  	s1*=i;
  }
  for(int i=1;i<=n-k;i++) s3*=i;
  return s/(s1*s3);
}
}
int main()
{	
	int t;
	cin>>t;
  while (t--)
  {	
  	int a,b;
    cin >> b >> a;
    int kq = Power(a, b) % e;
    cout << kq << endl;
  }
}

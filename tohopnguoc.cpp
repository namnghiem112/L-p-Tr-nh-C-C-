#include <iostream>
#include <string> 
using namespace std; 
int n,k,a[1000],ok=1;
void khoitao(){
	for(int i=1;i<=k;i++) a[i]=n-k+i;
}
void sinh(){
		int h=k;
        while(a[h]==n-k+h-(n-k) && h>=1)
        {
            h--;
        }
        if (h==0) ok=0;
        a[h]=a[h]-1;
        if(a[h]==a[h-1])
        {
            while (a[h-1]==a[h])
            {
                h--;
                a[h]=a[h]-1;
            }
            for (int i=h+1;i<=k;i++)
            {
                a[i]=n-k+i;
            }
        }
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        cin >> n >>k;
    	ok=1;
    	khoitao();
    	while(ok){
    		for (int i=1;i<=k;i++)
        {
            cout << a[i] <<" ";
        }	
        cout<<endl;
        sinh();
		}
    }
}

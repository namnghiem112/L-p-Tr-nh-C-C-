#include <iostream>
#include <string> 
using namespace std; 

main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,k;
        cin >> n >>k;
        int a[1005];
        for (int j=1;j<=k;j++)
        {
            cin >> a[j];
        }
        int h=k;
        while(a[h]==n-k+h-(n-k)&&h>=1)
        {
            h--;
        }
        if (h==0)
        {
            for (int i=1;i<=k;i++)
            {
                a[i]=n-k+i;
                cout << a[i] << " ";
            }
            cout << endl;
            continue;
        }
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
        for (int i=1;i<=k;i++)
        {
            cout << a[i] <<" ";
        }
        cout << endl;
    }
}

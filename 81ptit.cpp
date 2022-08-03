#include <iostream>
#include <algorithm> 
using namespace std;
int main()
{   
  int t;
  cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++) cin>>a[i];
    int i = n-1;      
    while (a[i]>a[i-1])  
        {
          i--; 
        }
        if (i>0)     
        {
            int k;
            for(k =n-1;k>=i;k--)       
            {
                if (a[k]<a[i-1]) break;
            }
            swap(a[k],a[i-1]); 
            for (int k=i; k<i+(n-i)/2; k++)    
            {
                swap(a[k],a[n-1-k+i]);
            }
            for (int i=0;i<n;i++)  
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }     
    return 0; 
}

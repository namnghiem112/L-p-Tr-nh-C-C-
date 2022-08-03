#include <iostream>
using namespace std;
const int N=15;
int a[N];
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size()+1;
        for(int i=1;i<=n;i++) a[i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
            if(a[j]==0){
                int tt=0;
                if(s[j-1]=='D' && a[j+1]==0) tt=1;
                if(tt==0){
                    a[j]=i;
                    break;
                }
            }
        }
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<"\n";
    }
}

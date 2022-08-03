#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        long long a1=0,a2=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='1') a1+=pow(2,i);
        }
        for(int i=0;i<s2.length();i++){
            if(s2[i]=='1') a2+=pow(2,i);
        }
        cout<<a1*a2<<endl;
    }
}
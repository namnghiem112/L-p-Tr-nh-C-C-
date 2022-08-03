#include<bits/stdc++.h>
using namespace std;
int check(string s) {
    int c=0;
    int x=-1, y=-1;
    int n=s.size();
    for(int i=0; i<n; i++) {
        if(s[i]=='@') {
            c++;
            x=i;
        }
        if(s[i]=='.') y=i;
        if(s[i]==' ') return 0;
    }
    if(c>1) return 0;
    int name=0, mien=0;
    for(int i=0; i<x; i++) {
        name++;
        if(!isalpha(s[i]) && !isdigit(s[i]) && s[i]!='.' && s[i]!='_') return 0;
    }
    for(int i=x+1; i<n; i++) {
        mien++;
        if(!isalpha(s[i]) && !isdigit(s[i]) && s[i]!='.' && s[i]!='_') return 0;
    }
    if(x==-1 || y==-1) return 0;
    if(name>64 || mien>254 || name==0) return 0;
    if(x>y) return 0;
    if(s[n-1]=='.' || s[x+1]=='.') return 0;
    return 1;
} 
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        if(check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

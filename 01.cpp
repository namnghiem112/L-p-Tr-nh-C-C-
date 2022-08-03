#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream filein;
    filein.open("DATA.in");
    int x;
    long long sum=0;
    while(!filein.eof()){
      filein>>x;
      sum+=x;
    }
    cout<<sum<<endl;
    filein.close();
    return 0;
}

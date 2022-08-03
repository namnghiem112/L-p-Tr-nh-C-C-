#include <bits/stdc++.h>
using namespace std;
void copyFile(char *name1, char *name2){
    ifstream fp1;
    fp1.open(name1);
    ofstream fp2;
    fp2.open(name2);
    while(!fp1.eof()){
        char line[225];
        cout <<line<<endl;
        fp1.getline(line,62);
        fp2<<line<<endl;
    }
    fp1.close();
    fp2.close();
}
int main(){
    copyFile("PTIT.in","PTIT.out");
    system("PAUSE");
    return 0;
}

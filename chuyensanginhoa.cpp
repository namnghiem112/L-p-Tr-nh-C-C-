#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[200];
    fgets(string,99,stdin);
    int s=strlen(string);
    for(int i=0;i<s;i++){
        string[i] = toupper(string[i]);//toupper chuyển sang in hoa
        putchar(string[i]);//in ra xâu
        
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#define max 200

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
    char string[max];
    const char sep[2] = " ";
    int d = 0;
    gets(string);
    char* stock = strtok(string, sep);
    while (NULL != stock) {
        d++;
        stock = strtok(NULL, sep);
    }
    printf("%d\n",d);
    }
    return 0;
}
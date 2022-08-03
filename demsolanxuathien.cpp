#include <stdio.h>
#define pt 200
int main() {
    int n,mang[pt],kt[pt] = {0};
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        scanf("%d",&mang[i]);
    }
    for (int i = 1; i<= n; i++){
        kt[mang[i]]++;
    }
    for (int i = 1; i<= n; i++){
        if (kt[mang[i]] >= 2) {
            printf("%d ",mang[i]);
            kt[mang[i]] = 0;
        }
    }
    return 0;
}
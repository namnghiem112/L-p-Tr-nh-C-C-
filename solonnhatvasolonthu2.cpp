#include <stdio.h>

int main() {
    int n,mang[100];
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        scanf("%d",&mang[i]);
    }
    int max1 = 0,max2 = 0;
    for (int i = 0; i< n; i++){
        if (mang[i] > max1) max1 = mang[i];
    }
    for (int i = 0; i< n; i++){
        if (mang[i] == max1) continue;
        if (mang[i] > max2) max2 = mang[i];
    }
    printf("%d %d",max1,max2);
    return 0;
}
#include <stdio.h>

int main() {
    int hang,cot,temp;
    int mang[100][100];
    scanf("%d %d",&hang,&cot);
    
    int max = hang;
    if (cot > max) max = cot;
    
    temp = max;
    for (int i = 0; i < temp ;i++){
        mang[0][i] = max--;
    }
    temp--;
    for (int i = 1; i<hang ;i++){
        for (int j = 0; j< temp; j++){
            mang[i][j] = mang[i-1][j]-1;
        }
        for (int j = temp; j< cot; j++){
            mang[i][j] = mang[i-1][j]+1;
        }
        temp--;
    }
    for (int i =0; i< hang; i++) {
        for (int j =0; j < cot; j++) {
            printf("%d",mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
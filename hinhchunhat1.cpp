#include <stdio.h>

int main() {
    int mang[100][100],hang,cot,dem = 1,k =1;
    scanf("%d %d",&hang,&cot);
    for (int i = 0; i < cot; i++){
        mang[0][i] = dem++;
    }
    for (int i = 1; i < hang; i++){
        for (int j = 0; j < cot-i; j++){
            mang[i][j] = mang[i-1][j]+1;
        }
        k =1;
        for (int j = cot-1; j >= cot-i; j--){
            if (j >=0)
                mang[i][j] = k++;
        }
        if ( (i >= cot)) mang[i][0] = mang[i-1][0]+1;
    }
    for (int i = 0; i < hang; i++){
        for (int j = 0; j< cot; j++){
            printf("%d",mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
 
 
void zigzak( int arr[100][100], int nArr ,int nArr2)
{
    int hang;        // row
    int cot;        // column
    int dia;        // diagonal
    int count = 1,dem=0,k=0,k1=0,dem1=0;
 
    // Cac duong cheo tu 0 den n - 1
    
     // Cac duong cheo tu n + 1 den 2n - 1
     for( dia = 1; dia < nArr; dia++ )
    { 
        for(hang =dia,cot = nArr2-1; hang< nArr; cot--, hang++ )
        {
           arr[ hang][ cot ] = count++ ;
        }
    }
     
}
int main()
{
    int square[100][100],hang,cot;
    int i,j,max;
    scanf("%d%d",&hang,&cot);
    zigzak( square,hang,cot);
    for( i = 0; i < hang; i++ )
    {
        for( j = 0; j < cot; j++ ){
        
            printf( "%d ", square[ i ][ j ] );
        }
        printf( "\n" );
    }
 
    return 0;
}
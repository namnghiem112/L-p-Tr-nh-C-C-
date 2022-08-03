#include <stdio.h>
struct danhsach {
	char ten[100];
	int maso;
};
int main()
{
    int a[105];
    int n,min,temp;
    struct danhsach list[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
    	min=i;
        for (int j = i+1; j < n;j++){
            if (a[min] > a[j]){
                min=j;  
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }	
        printf("Buoc %d: ", i+1);
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void xoa(char *src, int pos, int len)
{
    int size = strlen(src);
    for (int i = pos; i <= size - len; i++)
    {
        src[i] = src[i + len];
    }
}
void xoa_chuoi2_khoi_chuoi1(char *src, char *chuoi2)
{
    int len = strlen(chuoi2);
    for (int i = 0; src[i] != '\0'; i++)
    {
        if (strstr(&src[i], chuoi2) == &src[i])
        {
            xoa(src, i, len);
            i--;
        }
    }
}
int main()
{
    char chuoi1[1000];
    char chuoi2[100];
    fgets(chuoi1, 999, stdin);
    fgets(chuoi2, 99, stdin);
    int len = strlen(chuoi2);
    if (len > 0)
        chuoi2[len - 1] = '\0';
    int size = strlen(chuoi1);
    if (size > 0)
        chuoi1[size - 1] = '\0';
    xoa_chuoi2_khoi_chuoi1(chuoi1, chuoi2);
    puts(chuoi1);
    return 0;
}
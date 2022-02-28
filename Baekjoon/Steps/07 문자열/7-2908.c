// 2022-02-28 Mon. 13:56
// 2908 »ó¼ö
#include <stdio.h>
#include <stdlib.h>
#define _LEN 4
void rev(char* str, char* dest)
{
    for (int i = 0; i < _LEN - 1; i++)
        dest[i] = str[2 - i];
}
int main()
{
    char num1[_LEN];
    char num2[_LEN];
    scanf("%s %s", num1, num2);
    char rev1[_LEN];
    char rev2[_LEN];
    rev(num1, rev1);
    rev(num2, rev2);
    int a = atoi(rev1), b = atoi(rev2);
    printf("%d", (a > b) ? a : b);
}
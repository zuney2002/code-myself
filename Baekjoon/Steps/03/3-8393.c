// 2022-02-26 Sat. 22:23
// 8393 гу
#include <stdio.h>
int main()
{
    int a;
    int d = 0;
    scanf("%d", &a);
    for (int i = 1; i < a+1; i++)
        d += i;
    printf("%d", d);
}
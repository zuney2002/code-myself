// 2022-02-26 Sat. 22:38
// 2438 º° Âï±â - 1
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i < a+1; i++)
    {
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
}
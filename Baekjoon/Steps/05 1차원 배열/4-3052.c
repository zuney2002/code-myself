// 2022-02-27 Sun. 17:47
// 3052 ³ª¸ÓÁö
#include <stdio.h>
int main()
{
    int remainders[42] = {0, };
    for (int i = 0; i < 10; i++)
    {
        int a;
        scanf("%d", &a);
        remainders[a % 42]++;
    }
    int ct = 0;
    for (int i = 0; i < 42; i++)
    {
        if (remainders[i] != 0)
            ct++;
    }
    printf("%d", ct);
}
// 2022-03-01 Tue. 20:23
// 11653 소인수분해
#include <stdio.h>
#include <math.h>
int fn(int x)
{
    if (x == 1)
        return 0;
    else if (x == 2)
        return 1;
    for (int i = 2; i < sqrt(x) + 1; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int N;
    scanf("%d", &N);
    if (N == 1)
        return 0;
    while (N != 1)
    {
        for (int i = 2; i < sqrt(N) + 1; i++)
        {
            if (N % i == 0)
            {
                N /= i;
                printf("%d\n", i);
                break;
            }
        }
        if (fn(N) == 1)
        {
            printf("%d", N);
            break;
        }
    }
}
// 2022-03-01 Tue. 12:58
// 1978 소수 찾기
#include <stdio.h>
#include <math.h>
int main()
{
    int N, count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int x, flag = 0;
        scanf("%d", &x);
        if (x == 1)
            continue;
        else if (x == 2)
        {
            count++;
            continue;
        }
        for (int j = 2; j < sqrt(x) + 1; j++)
        {
            if (x % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            count++;
    }
    printf("%d", count);
}
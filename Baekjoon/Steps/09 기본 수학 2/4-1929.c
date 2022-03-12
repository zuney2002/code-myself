// 2022-03-09 Wed. 14:49
// 1929 소수 구하기
#include <stdio.h>
#include <math.h>
int isp(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    for (int i = 2; i < sqrt(n) + 1; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    for (int i = M; i <= N; i++)
    {
        if (isp(i) == 1)
            printf("%d\n", i);
    }
}
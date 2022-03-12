// 2022-03-09 Wed. 16:13
// 9020 ∞ÒµÂπŸ»Â¿« √ﬂ√¯
#include <stdio.h>
int p[10000] = {0, };
int isp(int n)
{
    if (n == 1)
        return 0;
    if (n % 2 == 0)
        return n == 2 ? 1 : 0;
    for (int i = 3; i*i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    for (int i = 0; i < 10000; i++)
        p[i] = isp(i + 1);
    int T;
    scanf("%d", &T);
    while (T > 0)
    {
        int n, d = 0;
        scanf("%d", &n);
        for (int i = 0; ; i++)
        {
            if (p[n/2 - i - 1] == 1 && p[n/2 + i - 1] == 1)
            {
                d = i;
                break;
            }
        }
        printf("%d %d\n", n/2 - d, n/2 + d);
        T--;
    }
}
// 2022-02-28 Mon. 20:19
// 2775 부녀회장이 될테야
// 계차수열 활용, 각 행의 일반항을 구하면 규칙성이 나옴
#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T > 0)
    {
        int k, n;
        scanf("%d", &k);
        scanf("%d", &n);
        int r = 1;
        for (int i = 0; i <= k; i++)
        {
            r *= (n + i);
            r /= (i + 1);
        }
        printf("%d\n", r);
        T--;
    }
}
// 2022-02-28 Mon. 19:32
// 10250 ACM хёез
#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T > 0)
    {
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);
        printf("%d%02d\n", (n % h == 0) ? h : n % h, (n % h == 0) ? n / h : n / h + 1);
        T--;
    }
}
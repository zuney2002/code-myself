// 2022-02-26 Sat. 22:49
// 10871 X보다 작은 수
#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++)
    {
        int d;
        scanf("%d", &d);
        if (d < x)
            printf("%d ", d);
    }
}
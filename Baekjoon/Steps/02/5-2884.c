// 2022-02-26 Sat. 21:36
// 2884 알람 시계
#include <stdio.h>
int main()
{
    int h, m;
    scanf("%d %d", &h, &m);
    if (m < 45)
    {
        m += 15;
        if (h == 0)
            h = 23;
        else
            h--;
    }
    else
        m -= 45;
    printf("%d %d", h, m);
}
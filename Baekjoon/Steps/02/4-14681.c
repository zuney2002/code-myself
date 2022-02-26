// 2022-02-26 Sat. 21:32
// 14681 사분면 고르기
#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if ((x > 0) & (y > 0))
        printf("1");
    else if ((x > 0) & (y < 0))
        printf("4");
    else if ((x < 0) & (y > 0))
        printf("2");
    else if ((x < 0) & (y < 0))
        printf("3");
}
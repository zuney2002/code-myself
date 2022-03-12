// 2022-03-09 Wed. 17:50
// 3009 네 번째 점
#include <stdio.h>
int main()
{
    int x0, y0, x1, y1, x2, y2;
    scanf("%d %d", &x0, &y0);
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    int x = (x0 == x1) ? x2 : ((x0 == x2) ? x1 : x0);
    int y = (y0 == y1) ? y2 : ((y0 == y2) ? y1 : y0);
    printf("%d %d", x, y);
}
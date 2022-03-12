// 2022-03-09 Wed. 17:43
// 1085 직사각형에서 탈출
#include <stdio.h>
int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int mx = (x > w/2) ? w - x : x;
    int my = (y > h/2) ? h - y : y;
    printf("%d", mx > my ? my : mx);
}
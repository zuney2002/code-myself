// 2022-02-28 Mon. 18:43
// 1193 분수찾기
#include <stdio.h>
#include <math.h>
int main()
{
    int X;
    scanf("%d", &X);
    double est = (1+ sqrt(1 + 8*X)) / 2;
    int f = (int)ceil(est);
    int i = f*(f -1) / 2;
    int ni = (i - X + 1);
    if (f % 2 == 0)
        printf("%d/%d", ni, f - ni);
    else
        printf("%d/%d", f - ni, ni);
}
// 2022-02-28 Mon. 17:04
// 1712 손익분기점
#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long fixed, vari, price;
    scanf("%lu %lu %lu", &fixed, &vari, &price);
    if (vari >= price)
    {
        printf("-1");
        return 0;
    }
    double r = (double)fixed / (price - vari);
    printf("%d", (int)floor(r) + 1);
}
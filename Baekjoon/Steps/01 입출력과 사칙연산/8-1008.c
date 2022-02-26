// 2022-02-26 Sat. 20:20
// 1008 A/B
#include <stdio.h>
int main()
{
    int a, b;
    double c;
    scanf("%d %d", &a, &b);
    c = (double)a / b;
    // 이 문제에선 정밀도를 요구하므로 포맷 문자열을 응용해야 한다.
    printf("%.16f", c);
}
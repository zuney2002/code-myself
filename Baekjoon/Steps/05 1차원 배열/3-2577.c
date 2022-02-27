// 2022-02-27 Sun. 17:37
// 2577 숫자의 개수
#include <stdio.h>
int main()
{
    int a, b, c, mul = 0;
    int count[10] = {0, };
    scanf("%d%*c%d%*c%d", &a, &b, &c);
    mul = a*b*c;
    while (mul != 0)
    {
        int n = mul % 10;
        count[n]++;
        mul /= 10;
    }
    for (int i = 0; i < 10; i++)
        printf("%d\n", count[i]);
}
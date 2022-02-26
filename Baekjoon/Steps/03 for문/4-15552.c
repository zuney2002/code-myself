// 2022-02-26 Sat 22:27
// 15552 ºü¸¥ A+B
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int a, b;
    while (t > 0)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        t--;
    }
}
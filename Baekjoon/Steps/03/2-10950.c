// 2022-02-26 Sat. 22:20
// 10950 A+B - 3
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        t--;
    }
}
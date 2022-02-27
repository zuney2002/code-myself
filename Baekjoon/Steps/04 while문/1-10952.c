// 2022-02-27 Sun. 15:47
// 10952 A+B - 5
#include <stdio.h>
int main()
{
    while (1)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if ((a == b) && a == 0)
            break;
        printf("%d\n", a+b);
    }
}
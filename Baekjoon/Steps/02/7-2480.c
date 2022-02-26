// 2022-02-26 Sat. 21:51
// 2480 주사위 세개
#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int a, b, c;
    int same_count = 0;
    int same_num = -1;
    int maxnum = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b)
    {
        same_count = (a == c) ? 3 : 2; 
        same_num = a;
    }
    else if (b == c)
    {
        same_count = 2;
        same_num = c;
    }
    else if (a == c)
    {
        same_count = 2;
        same_num = c;
    }
    else
    {
        maxnum = max(max(a, b), c);
    }
    if (same_count == 0)
        printf("%d", maxnum*100);
    else if (same_count == 2)
        printf("%d", 1000+same_num*100);
    else if (same_count == 3)
        printf("%d", 10000+same_num*1000);
}
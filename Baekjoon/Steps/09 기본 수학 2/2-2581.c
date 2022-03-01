// 2022-03-01 Tue. 20:20
// 2581 ¼Ò¼ö
#include <stdio.h>
#include <math.h>
int fn(int x)
{
    if (x == 1)
        return 0;
    else if (x == 2)
        return 1;    
    for (int i = 2; i < sqrt(x) + 1; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int s, e, sum = 0, min = 99999;
    scanf("%d", &s);
    scanf("%d", &e);
    for (int i = s; i <= e; i++)
    {
        if (fn(i) == 1)
        {
            sum += i;
            min = (min > i) ? i : min;
        }
    }
    if (sum == 0)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
}
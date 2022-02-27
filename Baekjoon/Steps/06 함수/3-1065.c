// 2022-02-27 Sun. 20:50
// 1065 ÇÑ¼ö
#include <stdio.h>
int fn(int n)
{
    int diff = 0;
    if (n < 10)
        return 1;
    else if (n < 100)
        return 1;
    for (int i = 0; ; i++)
    {
        if (i == 0)
        {
            diff = ((n / 10) % 10) - (n % 10);
            n /= 10;
            continue;
        }
        if (n / 10 == 0)
            return 1;
        if (diff != (((n / 10) % 10) - (n % 10)))
            return 0;
        else
            n /= 10;
    }
    return 0;
}
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        if (fn(i) == 1)
            c++;
    }
    printf("%d", c);
}